# 🏓 Ping Pong Game (Player vs. CPU)

A GUI implementation of the classic Pong game, developed in C++ to practice foundational programming skills and solidify Object-Oriented Programming (OOP) principles, featuring a basic Computer Player (CPU).

## ✨ Features

* **Single-Player Mode:** Play against an intelligent (CPU) opponent.
* **Console Interface:** Simple and fast-paced gameplay using standard I/O.
* **OOP Architecture:** Clear class separation for entity management and game logic.

## 🛠️ Technology Stack

* **Language:** C++ (Utilizing standard libraries only)
* **Build System:** [Specify your build system, e.g., GCC/G++ or makefile]

## 🧠 CPU Opponent Logic

The right-side paddle is controlled by a Computer Player. The logic demonstrates basic decision-making:

* **Tracking:** The CPU continuously tracks the **y-coordinate** of the moving `Ball` object.
* **Movement:** The CPU decides to move its paddle **Up** or **Down** based on whether the ball is above or below its current paddle center.
* **Difficulty:** [Optional: Briefly mention how the CPU's reaction speed or "smartness" is controlled, e.g., "The CPU has a slight delay to allow the player a chance to score."]

## 💡 Object-Oriented Design (OOP) Implementation

This project was structured using OOP concepts to manage the game state and entities efficiently. By modeling the paddles and ball as separate objects, the game logic remains modular.

| OOP Concept | Application in this Project |
| :--- | :--- |
| **Encapsulation** | Used classes like `Ball` and `Paddle` to bundle data (position, direction, score) and methods (move, draw) together. Critically, the CPU logic is confined to the `CPUPaddle` object's methods. |
| **Classes & Objects** | Key game elements are represented by dedicated classes: `Ball`, the player's `Paddle`, the `CPUPaddle`, and the overall `GameManager`. |
| **Inheritance** | [**Crucial - If Applicable:** Did you create a generic `Paddle` class and then inherit from it to create a `PlayerPaddle` and a `CPUPaddle`? If so, highlight this: **"The `PlayerPaddle` and `CPUPaddle` classes inherit from a base `Paddle` class."**] |
| **Abstraction** | The main game loop calls simple methods like `cpuPaddle.Update(ball)` without needing to know the complex internal logic of how the CPU determines its move. |

## 🚀 How to Run the Game

1.  **Clone the Repository:**
    ```bash
    git clone [https://github.com/ZiZ0U1/Ping_Pong_Game.git](https://github.com/ZiZ0U1/Ping_Pong_Game.git)
    cd Ping_Pong_Game
    ```

2.  **Compile the Code:**
    ```bash
    # If using g++ (most common)
    g++ -o pingpong [List all your .cpp files here, e.g., main.cpp Ball.cpp Paddle.cpp CPUPaddle.cpp]
    ```

3.  **Execute the Game:**
    ```bash
    ./pingpong
    ```

## 🎮 Game Controls

| Action | Control Key |
| :--- | :--- |
| **Move Up** | `[Key for Up, e.g., 'w']` |
| **Move Down** | `[Key for Down, e.g., 's']` |
| **Exit Game** | `[Key for Exit, e.g., 'x']` |

***

### Next Step

This updated README strongly highlights your abilities in both OOP and basic AI/Game Logic.

Would you like me to help you draft a small **C++ code snippet** demonstrating how your `CPUPaddle` class might use a method from the `Ball` class to make its movement decision? This is a great way to visually show code interaction in the README.
