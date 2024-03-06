#include<iostream>
#include<fstream>
using namespace std;
int main(){
  int chice;
  string fILEnAME; 
  string dATA;
  cout<<"Welcome to Text Editor "<< std::endl;
  cout<<"ALL WRITES OF THIS PROGRAM IS UNDER DIVJOT SHARMA"<<std::endl;
  cout<<"eNTER 1 fOR cREATE aND eNTER dATA fILE "<<std::endl;
  cout<<"eNTER 2 fOR oPEN aND mODIFY fILE "<<std::endl;
  cout<<"eNTER 3 fOR oPEN aND vIEW fILE "<<std::endl;
  cin>> chice;
  system("cls");
  if (chice==1){
    cout<<"eNTER fILE nAME ";
    cin>>fILEnAME;
    ofstream outfile(fILEnAME.append(".txt"));
    system("cls");
    cout<<"eNTER dATA ";
    cin>>getline(dATA);
    system("cls");
    outfile << dATA << endl;
    outfile.close();
  }else if (chice==2){

  }else if (chice==3){


  }else
  {
    
  }
  
  
  
  return 0;
}