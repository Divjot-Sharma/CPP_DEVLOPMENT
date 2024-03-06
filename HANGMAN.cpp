#include <iostream>
#include <cstdlib>
#include <string>
#include <random>
#include <cctype>
using namespace std;
int main()
{
    int e = 1;
    int chances = 9;
    int g = 0;
    int i = 0;
    int a = 1;
    char n;
    int corrrect = 0;
    string blanks = "_ ";
    string blanks1 = "_ ";
    random_device chujer;
    uniform_int_distribution <int>rang(0, 3);
    int chooser = rang(chujer);
    /*array*/
    string answer[] = { "dog","pen","python","football" };
    string questions[] = { "Animal which is loyal ","Use to write","coding language related to snakes ","Game in which foot is used" };
    int len = int(answer[chooser].length());
    for (0; i < answer[chooser].length(); i++) {}
    for (0; a < i; a++) {
        blanks = blanks.append(blanks1);
    }

    /*output part*/

    for (0; g <= chances; g++) {
        cout << "\nWelcome To Hangman game \n";
        cout << questions[chooser] << "\n";
        cout << blanks << "\n";
        cin >> n;
        if (isalpha(n)) {
            if (answer[chooser].find(n) == 18446744073709551615) {
                cout << "wrong guess ";
                chances = chances - 1;
                cout << "chances left" << chances;
            }
            else {
                cout << "correct guess \n";
                corrrect = corrrect + 1;
                cout << "chances left : " << chances<<"\n";
                if (answer[chooser].find(n) == 0) {
                        blanks[0] = n;
                        cout << blanks;

                }
                else if (answer[chooser].find(n) > 1){
                    blanks[answer[chooser].find(n) + e] = n;

                    cout << blanks;

                }


                if (corrrect == i) {
                    cout << "\ngood job";
                    break;
                }
            }
        }
    }
    
    

    return 0;
}

