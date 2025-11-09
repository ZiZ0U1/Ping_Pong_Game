# 🏓 Ping Pong Game (C++)

A console-based implementation of the classic Ping Pong (or Pong) game, developed in C++ to practice foundational programming skills and solidify Object-Oriented Programming (OOP) principles.

## ✨ Features

* **Classic Gameplay:** Two paddles and a ball.
* **Console Interface:** Utilizes standard input/output for a simple, fast-paced experience.
* **OOP Architecture:** Designed with clear class separation for maintainability and scalability.

## 🛠️ Technology Stack

* **Language:** C++ (Utilizing standard libraries only)
* **Build System:** [Specify your build system, e.g., GCC/G++ or makefile]

## 💡 Object-Oriented Design (OOP) Implementation

This project was specifically structured using OOP concepts to manage the game state and entities efficiently.

| OOP Concept | Application in this Project |
| :--- | :--- |
| **Encapsulation** | Used classes like `Ball` and `Paddle` to bundle data (position, direction, score) and methods (move, draw) together. The internal representation of these objects is hidden from the main game loop. |
| **Classes & Objects** | Key game elements are represented by dedicated classes: `Ball`, `Paddle`, and `GameManager` (or `GameLoop`). |
| **Inheritance** | [**Optional - Add this if you used it:** For example, if you created a base `GameObject` class that both `Ball` and `Paddle` inherit shared properties like position and drawing logic.] |
| **Abstraction** | The main game loop interacts with methods like `ball.Move()` or `paddle.Update()`, without needing to know the complex implementation details of how the movements or collision calculations are performed. |

## 🚀 How to Run the Game

1.  **Clone the Repository:**
    ```bash
    git clone [https://github.com/ZiZ0U1/Ping_Pong_Game.git](https://github.com/ZiZ0U1/Ping_Pong_Game.git)
    cd Ping_Pong_Game
    ```

2.  **Compile the Code:**
    ```bash
    # If using g++ (most common)
    g++ -o pingpong [List all your .cpp files here, e.g., main.cpp Ball.cpp Paddle.cpp]
    ```

3.  **Execute the Game:**
    ```bash
    ./pingpong
    ```

## 🎮 Game Controls

| Action | Player 1 (Left) | Player 2 (Right) |
| :--- | :--- | :--- |
| **Move Up** | `[Key for Up, e.g., 'w']` | `[Key for Up, e.g., 'i']` |
| **Move Down** | `[Key for Down, e.g., 's']` | `[Key for Down, e.g., 'k']` |
| **Exit** | `[Key for Exit, e.g., 'x']` | `[Key for Exit, e.g., 'x']` |

---
