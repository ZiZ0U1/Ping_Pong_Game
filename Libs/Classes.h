#include "raylib.h"
#include <iostream>
#include "Variables.h"
using namespace std;

class Ball{
    
    public:    
    
    float x = screenWidth/2 , y = screenHeight/2;
    double radius = 20;
    float xSpeed = 7 , ySpeed = 7;

    
    void Draw(){
        DrawCircle(x , y , radius , yellow);
    }

    void Update(){
        x += xSpeed;
        y += ySpeed;
        if( y + radius >= screenHeight || y - radius <= 0){
            ySpeed *= -1;
        }
        if( x + radius >= screenWidth){
            playerScore++;
            Reset();
        }
                
        if (x - radius <= 0){
            cpuScore++;
            Reset();
        }
    }

    void Reset(){
         x = screenWidth / 2;
         y = screenHeight / 2;
        
        int speedChoices[2] = {-1,1};
        
        xSpeed *= speedChoices[GetRandomValue(0,1)];
        ySpeed *= speedChoices[GetRandomValue(0,1)];

    }


};

class Player{
    public:   
       float x = screenWidth - 35 , y = screenHeight;
       float width = 25 , height = 120;
       int speed = 6;
      
       void limitMovement(){
           if( y + height >= screenHeight){
               y = screenHeight - height;
           }
           if( y <= 0){
               y = 0;
           }
       }
       
       void Draw(){
           DrawRectangleRounded(Rectangle{x , y , width , height}, 0.8 , 0 , WHITE);
       }
   
       void Update(){
           if(IsKeyDown(KEY_DOWN)){
               y += speed;
           }
           else if(IsKeyDown(KEY_UP)){
               y -= speed;
           }
   
           limitMovement();
       }
   
   
   };
   
   class Cpu {
    
    public:
    
    float x = 10 , y = screenHeight / 2 - 60;
    float width = 25 , height = 120;
    int speed = 6; 
    
    
    void limitMovement(){
        if( y + height >= screenHeight){
            y = screenHeight - height;
        }
        if( y <= 0){
            y = 0;
        }
    }
    
    void Draw(){
        DrawRectangleRounded(Rectangle{x , y , width , height}, 0.8 , 0 , WHITE);
    }
    
    void Update(int ball_y){
        if( y + height / 2 > ball_y ){
            y -= speed;
        }
        else if( y + height <= ball_y){
            y += speed;
        }
        limitMovement();
    }

};

