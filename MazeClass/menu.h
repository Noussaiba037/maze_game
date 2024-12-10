#ifndef MENU_H
#define MENU_H
class Menu {
    static void MainMenu ();
    static void DifficultyMenu ();
    static void PauseMenu ();
    static void GameOverMenu (float timeTaken, int diffuclty);
};

#endif