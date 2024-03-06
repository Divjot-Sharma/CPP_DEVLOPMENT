    #include<iostream>
    #include<cstdlib>
    using namespace std;
    int main(){
    int a,b,c;
    c=0;
    cout<<"Enter Number =>";
    cin>> a;
    b=a;
    while(b!=0){
        c=c*10 + b%10;
        b=b/10;
    }
    system("cls");
    cout<<"Reverse Number => "<<c<<"\n";
    return 0;
    }
    
    