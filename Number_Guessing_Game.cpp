#include<iostream>
#include<ctime>
using namespace std;
// PRME  COMPOSITE EVEN ODD SUM   REPET RESPONSE 
int main(){
    string E_OR_H;
    int lim;
    srand(time(NULL));
    int randnum;
    int tries;
    int guess=NULL;

    cout<<"ENTER (e) FOR EASY MODE "<<endl;
    cout<<"ENTER (h) FOR HARD MODE "<<endl;
    cin>>E_OR_H;

    if(E_OR_H=="E"||E_OR_H=="e"){
        cout << "YOU HAVE UNLIMTED TRIES"<<endl;
        cout << "ENTER LIMIT"<<endl;
        cin >> lim;
        randnum = (rand()%lim)+1;
        tries=0;
        while (guess != randnum)
        {
            cout<<"ENTER YOUR GUESS"<<endl;
            cin>>guess; 
            if(guess!=randnum){
                //PRIME || EVEN || ODD || SUM  
                cout<<"YOU GUESSED IT WRONG"<<endl;
                tries+=1;
                if(guess > randnum){
                    cout<<"TOO HIGH"<<endl;

                }else{
                    cout<<"TOO LOW"<<endl;
                }
            }if(guess==randnum){
                cout<<"YOU GUESSED IT (TRIES TAKEN "<<tries<<" )"<<endl;
                break;
            }
            
        }
    }else if(E_OR_H=="H"||E_OR_H=="h"){
        cout << "YOU HAVE 5 TRIES"<<endl;
        while (lim<=10)
        {
            cout << "ENTER LIMIT"<<endl;
            cin >> lim;
        }

        randnum = (rand()%lim)+1;
        tries = 5;
        while (tries>0)
        {
            cout<<"ENTER YOUR GUESS"<<endl;
            cin>>guess;
            if(guess!=randnum){  
                tries-=1;
                cout<<"YOU GUESSED IT WRONG(TRIES LEFT "<<tries<<" )"<<endl;
                if(guess > randnum){
                    cout<<"TOO HIGH"<<endl;

                }else{
                    cout<<"TOO LOW"<<endl;
                }
            
            }if(guess==randnum){
                cout<<"YOU GUESSED IT"<<endl;
                break;
            }
        }
         

    }else{
        cout << "enter correct value"<<endl;
        
    main();

    }
    return 0;
}