#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main(){
int op,num1,num2;
char chice = 'Y';
cout<<"|********CALCULATOR********|"<<endl;
cout<<"|Enter (1) Addition        |"<<endl;
cout<<"|Enter (2) Subbtraction    |"<<endl;
cout<<"|Enter (3) Multiplication  |"<<endl;
cout<<"|Enter (4) Division        |"<<endl;
cout<<"|Enter (5) Exponentation   |"<<endl;
cout<<"|Enter (6) Modulus         |"<<endl;
cout<<"|**************************|"<<endl;
cin>>op;
system("cls");
switch(op){
  case 1:
	  while(chice=='Y'){
	  cout<<"Enter Number ";
	  cin>>num1;
	  system("cls");
	  cout<<"Enter Number ";
	  cin>>num2;
	  system("cls");
	  num1=num1+num2;
	  cout<<"Enter (Y/N)";
	  cin>>chice;
	  system("cls");
	  }
	  cout<<"Sum is:"<<num1<<endl;
	  main();
  case 2:
    while(chice=='Y'){
	  cout<<"Enter Number ";
	  cin>>num1;
	  system("cls");
	  cout<<"Enter Number ";
	  cin>>num2;
	  system("cls");
	  num1=num1-num2;
	  cout<<"Enter (Y/N)";
	  cin>>chice;
	  system("cls");
	  }
	  cout<<"Difference is:"<<num1<<endl;
	  main();
  case 3:
    while(chice=='Y'){
	  cout<<"Enter Number ";
	  cin>>num1;
	  system("cls");
	  cout<<"Enter Number ";
	  cin>>num2;
	  system("cls");
	  num1=num1*num2;
	  cout<<"Enter (Y/N)";
	  cin>>chice;
	  system("cls");
	  }
	  cout<<"product is:"<<num1<<endl;
	  main();
  case 4:
    while(chice=='Y'){
	  cout<<"Enter Number ";
	  cin>>num1;
	  system("cls");
	  cout<<"Enter Number ";
	  cin>>num2;
	  system("cls");
	  num1=num1/num2;
	  cout<<"Enter (Y/N)";
	  cin>>chice;
	  system("cls");
	  }
	  cout<<"quetioent is:"<<num1<<endl;
	  main();
  case 5:
	  cout<<"Enter Number ";
	  cin>>num1;
	  system("cls");
	  cout<<"Enter Power";
	  cin>>num2;
	  system("cls");
	  num1=pow(num1,num2);
	  cout<<"Enter (Y/N)";
	  cin>>chice;
	  system("cls");
	  cout<<"Product is:"<<num1<<endl;
	  main();
  case 6 :
      while(chice=='Y'){
	  cout<<"Enter Number ";
	  cin>>num1;
	  system("cls");
	  cout<<"Enter Number ";
	  cin>>num2;
	  system("cls");
	  num1=num1%num2;
	  cout<<"Enter (Y/N)";
	  cin>>chice;
	  system("cls");
	  }
	  cout<<"modulus is:"<<num1<<endl;
	  main();
  default :
    cout<<"Invaild Input"; 
}
return 0;
}
