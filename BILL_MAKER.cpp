#include <iostream>
#include <string.h>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <chrono>
#include<time.h>
using namespace std;
int main()
{
system("cls");
// variable declaration
    int product_quantity[5000];
    string product_name[5000];
    float product_price[5000];
    char chice = 'Y';
    int lopv=0;
    float gst, dis;
    int p=0;
    float subil = 0;
    float subil_with_dis = 0;
    float subil_with_gst = 0;
    string name;
    struct tm tm;
    auto start= chrono::system_clock::now();
    time_t end_time= chrono::system_clock::to_time_t(start);
    localtime_r(&end_time,&tm);
    char CharLocalTimeofUTCTime[29];
    strftime(CharLocalTimeofUTCTime,29,"%c",&tm);
    string date = ctime(&end_time);
    


//taking input form user
    cout <<"Enter The Name of Person/Company =>";
    cin >> name;
    system("cls");
    cout <<"Enter GST Percentage =>";
    cin >> gst ;
    system("cls");
    cout <<"Enter Discount Percentage =>";
    cin >> dis;
    system("cls");
    while (chice == 'Y'){
        cout << "Enter Product Name =>";
        cin >> product_name[lopv];
        system("cls");
        cout << "Enter Product Price =>";
        cin >> product_price[lopv];
        system("cls");
        cout << "Enter Product Quantity =>";
        cin >> product_quantity[lopv];
        system("cls");
        lopv++;
        cout << "enter(Y/N)";
        cin >> chice;
        system("cls");
    };


    int loca = lopv - 1;

// bill calculation
    while (p <= loca){
        subil = subil + product_price[p] * product_quantity[p] ;
        p++;
    }
    subil_with_dis = subil - ((dis/100)* subil);
    subil_with_gst = subil_with_dis  + ((gst/100)* subil_with_dis) ;
// bill output
cout<<"****************************************************************************************\n";
cout<<"|Purchaser Name         |"<<setw(62)<< name<<"\n";
cout<<"|Date On Which Purchased|"<<setw(61)<< date<<"\n";
 p=0;
cout<<"****************************************************************************************\n";
cout<<"| Product Name        | Product Price        | Product Quantity    | Sub Amount        |\n";
while (p <= loca){
    cout<<"| "<<setw(20)<<product_name[p] <<"| "<< setw(21)<<product_price[p] <<"| "<<setw(20)<<product_quantity[p]<<"|"<<setw(19)<<product_price[p]*product_quantity[p] <<"|\n";
p++;
};
cout<<"****************************************************************************************\n";
cout<<"                                            |Total GST           | "<<setw(20)<<subil_with_gst-subil_with_dis<<"|\n";
cout<<"                                            |Total Discount      | "<<setw(20)<<subil_with_dis-subil<<"|\n";
cout<<"                                            |Total Bill          | "<<setw(20)<<subil_with_gst<<"|\n";
cout<<"                                            ********************************************\n";
return 0;
}
