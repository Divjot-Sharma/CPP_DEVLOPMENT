// Bulletshot_Roulette_V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>
#include <random>
#include <iomanip>
struct player {
    std:: string Name;
    int Health;
    std::string items[8];
};
using namespace std;
int main()
{
    srand(NULL);
    bool EnterKeyNotPressed = true;
    bool OneKeyorTwoKeyNotPressed = true;
    cout << "#     #                                              #######           ######                                                                  ######                                                 "<< endl;
    cout << "#  #  # ###### #       ####   ####  #    # ######       #     ####     #     # #    # #      #      ###### #####  ####  #    #  ####  #####    #     #  ####  #    # #      ###### ##### ##### ###### "<< endl;
    cout << "#  #  # #      #      #    # #    # ##  ## #            #    #    #    #     # #    # #      #      #        #   #      #    # #    #   #      #     # #    # #    # #      #        #     #   #      " << endl;
    cout << "#  #  # #####  #      #      #    # # ## # #####        #    #    #    ######  #    # #      #      #####    #    ####  ###### #    #   #      ######  #    # #    # #      #####    #     #   #####  " << endl;
    cout << "#  #  # #      #      #      #    # #    # #            #    #    #    #     # #    # #      #      #        #        # #    # #    #   #      #   #   #    # #    # #      #        #     #   #      " << endl;
    cout << "#  #  # #      #      #    # #    # #    # #            #    #    #    #     # #    # #      #      #        #   #    # #    # #    #   #      #    #  #    # #    # #      #        #     #   #      " << endl;
    cout << " ## ##  ###### ######  ####   ####  #    # ######       #     ####     ######   ####  ###### ###### ######   #    ####  #    #  ####    #      #     #  ####   ####  ###### ######   #     #   ###### " << endl;
    cout << endl; 
    cout << endl;
    cout << "Press Enter key to begin";
    while (EnterKeyNotPressed) {
        if (GetAsyncKeyState(VK_RETURN)) {
            EnterKeyNotPressed = false;
            system("cls");
        }
    }
    system("cls");
    player youfool;
    player youfool2;
    cout << "Enter First Player Name:";
    cin >> youfool.Name;
    cout << "Enter Second Player Name:";
    cin >> youfool2.Name;
    system("cls");
    cout << "Press 1 For money mode"<<endl;
    cout << "Press 2 For normal mode"<<endl;
    while (OneKeyorTwoKeyNotPressed) {
        if (GetAsyncKeyState('1') & 0x8000) {
            OneKeyorTwoKeyNotPressed = false;
            int mode = 1;
            system("cls");
        }if (GetAsyncKeyState('2') & 0x8000) {
            OneKeyorTwoKeyNotPressed = false;
            system("cls");
            int mode = 2;
        }
    }
    random_device commas;
    uniform_int_distribution<int> rang(1, 8);
    int livebullts =rang(commas);
    int blankbullts=rang(commas);
    cout << "live Bullets "<< livebullts <<" Blank Bullet "<< blankbullts <<endl;
    for (int i = 1; i < livebullts; i++)
    {
        cout << " ||||||" << endl << " |----|" << endl << " |  L |" << endl << " |    |" << endl << " |____|" << endl;
    }
    cout << endl;
    for (int i = 1; i < blankbullts; i++)
    {
        cout << " ||||||" << endl << " |----|" << endl << " |  B |" << endl << " |    |" << endl << " |____|" << endl; 
    }
    Sleep(3000);
    system("cls");
    cout << youfool.Name<<setw(20)<< youfool2.Name;
    for (int i = 0; i < 8; i++)
    {
        cout << youfool.items[i] << setw(20) << youfool2.items[i];
    }


}


