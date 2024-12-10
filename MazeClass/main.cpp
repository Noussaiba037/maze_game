#include "maze.h"
#include "config.h"
#include "menu.h"

enum GameState{
    MAIN_MENU,
    DIFFICULTY_MENU,
    GAME_PLAY,
    PAUSE_MENU,
    GAMEOVER_MENU
};

int main() 
{
    // Initialize the game window
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Maze Game");

    // Limit the game to 60 FPS
    SetTargetFPS(60);

    



    return 0;
}