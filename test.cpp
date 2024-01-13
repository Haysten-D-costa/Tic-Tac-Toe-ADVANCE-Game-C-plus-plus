#include <iostream>
#include "textstyling.h"
#include "util.h"

int main() {
    system("cls");
    std::string msg = ">  Steps :\n\n�   1. Initialize both players, note that player 1 is designated by 'X' and the player 2 is\n�      designated by 'O', this cannot be changed.\n�   2. The game begins, the player X is allowed to select a required grid. The tab functionality\n�      can be used to switch to a required grid, after 1st move, this functionality will be\n�      disabled. Next player cannot switch the grids anymore.\n�   3. From now on, the players will be automatically taken to the appropriate position based on\n�      the move played by the previous player. This is verified and no errors will occur...\n�                                            \n�   4. On selecting a grid which is already won, the player will be directed to a grid position\n�      which was last played to win that overall grid..\n�      ALL THIS IS DONE BY THE GAME LOGIC and players need not worry about the same !!!\n�                                            \n�   5. WIN, DRAW, LOSE, or any ERROR Moves are all indicated by the logic. . .\n�      This makes it a very user friendly game !\n";

    std::cout << "?�������������������������������������������������������������������������������������������������������" << std::endl
              << "? "<<CYAN_TEXT<<"The Ultimate Tic-Tac-Toe Documentation :"<<RESET<<"                                                             ?" << std::endl
              << "?                                                                                                      ?" << std::endl
              << "?   >  About the Game :                                                                                 ?" << std::endl
              << "?                                                                                                      ?" << std::endl
              << "?                                                                                                      ?" << std::endl
              << "?                                                                                                      ?" << std::endl
              << "?                                                                                                      ?" << std::endl
              << "?                                                                                                      ?" << std::endl
              << "?                                                                                                      ?" << std::endl
              << "?   >  Functionalities :                                                                                ?" << std::endl
              << "?                                                                                                      ?" << std::endl
              << "?                                                                                                      ?" << std::endl
              << "?                                                                                                      ?" << std::endl
              << "?                                                                                                      ?" << std::endl
              << "?                                                                                                      ?" << std::endl
              << "?                                                                                                      ?" << std::endl
              << "?                                                                                                      ?" << std::endl
              << "?                                                                                                      ?" << std::endl
              << "?                                                                                                      ?" << std::endl
              << "?                                                                                                      ?" << std::endl
              << "?                                                >"<<CYAN_TEXT<<"  LeftArrow Key"<<RESET<<" - To next page . . .                 ?" << std::endl
              << "?                                                >"<<CYAN_TEXT<<"  Enter  Key   "<<RESET<<" - To proceed to game . . .           ?" << std::endl
              << "?                                                >"<<CYAN_TEXT<<"  Escape Key   "<<RESET<<" - To terminatee game . . .           ?" << std::endl
              << "?                                                                                                      ?" << std::endl
              << "?                                                                                                      ?" << std::endl
              << "?������������������������������������������������������������������������������������������������������?" << std::endl;
    
    util::gotoXY(5,4);  std::cout << YELLOW_TEXT << msg;
    // util::gotoXY(6,13); std::cout << YELLOW_TEXT << msg;
    util::gotoXY(0,30);
    return 0;
}
