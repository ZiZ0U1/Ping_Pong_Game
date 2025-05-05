#include <iostream>
#include <raylib.h>
#include "Libs/Classes.h"

using namespace std;


int main () {
    
    Player player;
    Ball ball;
    Cpu cpu;
    
    InitWindow(screenWidth,screenHeight,"Ping Pong");
    
    SetTargetFPS(60);
    while(!WindowShouldClose()){


        BeginDrawing();
        // updating
        ball.Update();
        player.Update();
        cpu.Update(ball.y);
        
        //Checking For Collision
        if(CheckCollisionCircleRec(Vector2{ball.x,ball.y},ball.radius,Rectangle{player.x,player.y,(float)player.width,(float)player.height})){
            ball.xSpeed *= -1;
        }    
        if(CheckCollisionCircleRec(Vector2{ball.x,ball.y},ball.radius,Rectangle{cpu.x,cpu.y,(float)cpu.width,(float)cpu.height})){
            ball.xSpeed *= -1;
        }
        // Drawing
        ClearBackground(darkGreen);
        DrawRectangle(screenWidth/2 , 0 , screenWidth/2 , screenHeight , Green);
        DrawCircle(screenWidth/2 , screenHeight/2 , 150 , lightGreen);
        ball.Draw();
        player.Draw();
        cpu.Draw();
        DrawLine(screenWidth/2, 0 , screenWidth/2, screenHeight, WHITE);
        DrawText(TextFormat("%i",playerScore), screenWidth / 4 - 20 , 20 , 80 , WHITE );
        DrawText(TextFormat("%i",cpuScore), 3 * screenWidth / 4 - 20  , 20 , 80 , WHITE );
        EndDrawing();
    }


    CloseWindow();
}