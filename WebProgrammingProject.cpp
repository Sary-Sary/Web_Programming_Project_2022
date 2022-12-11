// WebProgrammingProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include "Maze.h"
#include "Player.h"
#include <stdlib.h>
#include <conio.h>

int main()
{
    //std::cout << "Hello World!\n";

    Maze maze;
    Player player (0, 0, &maze);
    char move = 'a';
    bool active_game = true;
    bool in_fight = false;

    while (active_game) {

        //system("CLS");        
        if (!in_fight) {
            //std::cout << "\x1B[2J\x1B[H";
            system("CLS");
            maze.print();
            move = _getch();
            player.move(&maze, move, in_fight);
        }        

    }
    
}


