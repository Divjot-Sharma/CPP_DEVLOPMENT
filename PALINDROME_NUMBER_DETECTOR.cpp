    #include<iostream>
    #include<cstdlib>
    using namespace std;
    int main(){
    int a,b,c;
    c=0;
    cout<<"Enter Number to Check whether it is Palindrome or Not =>";
    cin>> a;
    b=a;
    while(b!=0){
        c=c*10 + b%10;
        b=b/10;
    }
    system("cls");
    if(a==c){
        cout<<"The Number is Palindrome\n";
    }else{
        cout<<"The Number is not Palindrome\n";
    }
    return 0;
    }
    
    