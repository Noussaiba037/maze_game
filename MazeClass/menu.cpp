#include "menu.h"
#include "raylib.h"
#include "config.h"
#include <iostream>

void Menu::MainMenu()
{
    ClearBackground(PURPLE);
    const int titleWidth = MeasureText("Maze Game", 80);
    const int startTextWidth = MeasureText("Press ENTER to start", 60);
    const int exitTextWidth = MeasureText("Press ESC to exit", 60);

    int titleX = (SCREEN_WIDTH - titleWidth) / 2;
    int startTextX = (SCREEN_WIDTH - startTextWidth) / 2;
    int exitTextX = (SCREEN_WIDTH - exitTextWidth) / 2;

    int titleY = SCREEN_HEIGHT / 4;
    int startTextY = SCREEN_HEIGHT / 2;
    int exitTextY = SCREEN_HEIGHT / 2 + 30;

    DrawText("Maze Game", titleX, titleY, 80,BLUE);
    DrawText("Press ENTER to start", startTextX, startTextY, 60, DARKGREEN);
    DrawText("Press ESC to exit", exitTextX, exitTextY, 60, RED);
}
void Menu::DifficultyMenu()
{
   ClearBackground(Color{100, 150, 255, 255});
   const int titleWidth = MeasureText("Levels",40);
   const int easyTextWidth = MeasureText("1: Easy",30);
   const int mediumTextWidth = MeasureText("2: Medium",30);
   const int hardTextWidth = MeasureText("3: Hard",30);
   const int backTextWidth = MeasureText("Press B to go back",30);

   int titleX = (SCREEN_WIDTH - titleWidth) / 2;
   int easyTextX = (SCREEN_WIDTH - easyTextWidth) / 2;
   int mediumTextX = (SCREEN_WIDTH - mediumTextWidth) / 2;
   int hardTextX = (SCREEN_WIDTH - hardTextWidth) / 2;
   int backTextX = (SCREEN_WIDTH - backTextWidth) / 2;
   
   int titleY = SCREEN_HEIGHT / 4;
   int easyTextY = SCREEN_HEIGHT / 2 - 30;
   int mediumTextY = SCREEN_HEIGHT / 2;
   int hardTextY = SCREEN_HEIGHT / 2 + 30;
   int backTextY = SCREEN_HEIGHT / 2 + 60;

   DrawText("Levels",titleX,titleY,40,DARKBLUE);
   DrawText("1: Easy",easyTextX,easyTextY,30, PINK);
   DrawText("2: Medium",mediumTextWidth,mediumTextY,30,PINK);
   DrawText("3: Hard",hardTextX,hardTextY,30,PINK);
   DrawText("Press B to ge back",backTextWidth,backTextY,30,RED);
}
void Menu::PauseMenu()
{
    const int titleWidth = MeasureText("Game Paused",50);
    const int continueTextWidth = MeasureText("Press C to continue",30);
    const int returnTextWidth = MeasureText("Press R to return to levels menu",30);

    int titleX = (SCREEN_WIDTH - titleWidth) / 2;
    int continueTextX = (SCREEN_WIDTH - continueTextWidth) / 2;
    int returnTextX = (SCREEN_WIDTH - returnTextWidth) / 2;

    int titleY = SCREEN_HEIGHT / 4;
    int continueTextY = SCREEN_HEIGHT / 2;
    int returnTextY = SCREEN_HEIGHT / 2 + 30;

    DrawText("Game Paused", titleX, titleY, 30, DARKBROWN);
    DrawText("Press C to continue", continueTextWidth,continueTextY,30,DARKGRAY);
    DrawText("Press R to return to levels menu", returnTextWidth, returnTextY,30,DARKGRAY);

}
void Menu::GameOverMenu(float timeTaken, int difficulty)
{
    const int titleWidth = MeasureText("Game Over",40);
    const int restartTextWidth = MeasureText("Press R to restart",30);
    const int exitTextWidth = MeasureText("Press E to exit",30);

    int titleX = (SCREEN_WIDTH - titleWidth) / 2;
    int restartTextX = (SCREEN_WIDTH - restartTextWidth) /2;
    int exitTextX = (SCREEN_WIDTH - exitTextWidth) / 2;

    int titleY = SCREEN_HEIGHT / 4;
    int restartTextY = SCREEN_HEIGHT /2;
    int exitTextY = SCREEN_HEIGHT / 2+ 30;

    DrawText("Game Over", titleX, titleY,40,DARKPURPLE);
    DrawText("Press R to restart", restartTextX, restartTextY, 30,DARKBROWN);
    DrawText("Press Q to exit", exitTextX, exitTextY,30,RED);
}