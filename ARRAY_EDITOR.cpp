#include <iostream>
#include <string>
using namespace std;
const int Aarray_Size=24234;
string User_Data_Array[Aarray_Size];
int Array_Size=0;
int main()
{
    int Data_Choice, Place_Number;
    int i = 0;
    string Data;
    char Chice = 'Y';
    if(Array_Size==0){
    cout << "Enter Array Size" << endl;
    cin >> Array_Size;
    User_Data_Array[Array_Size];
    }
    
    cout << "Enter (1) to Insert Mode " << endl;
    cout << "Enter (2) to Modify Mode" << endl;
    cout << "Enter (3) to Delete Mode" << endl;
    cin >> Data_Choice;
    if (Data_Choice == 1)
    {
        while (Chice == 'Y')
        {
            cout << "Enter Data" << endl;
            cin >> Data;
            cout << "Enter Place Number" << endl;
            cin >> Place_Number;
            Place_Number-=1;

            if (User_Data_Array[Place_Number] == ""){
                User_Data_Array[Place_Number] = Data;
                for (0; i<Array_Size; i++)
                {
                    cout << "Place Number " << i+1 << " " << User_Data_Array[i] << endl;
                };
                i = 0;
                cout<<"Enter (Y/N)";
                cin>>Chice;
            }else{
                cout << "Please Use Modify Mode" << endl;
                main();
            };
        }
        main();
    }
    else if (Data_Choice == 2)
    {
        while (Chice == 'Y')
        {
            cout << "Enter Data" << endl;
            cin >> Data;
            cout << "Enter Place Number" << endl;
            cin >> Place_Number;
            Place_Number-=1;
            if (User_Data_Array[Place_Number] != ""){
                User_Data_Array[Place_Number] = Data;
                for (0; i<Array_Size; i++)
                {
                    cout << "Place Number " << i+1 << " " << User_Data_Array[i] << endl;
                };
                i = 0;
                cout<<"Enter (Y/N)";
                cin>>Chice;
            }else{
                cout << "Please Use Insert Mode" << endl;
                main();
            };
        }
        main();
    }
    else if (Data_Choice == 3)
    {
        while (Chice == 'Y')
        {
            cout << "Enter Place Number" << endl;
            cin >> Place_Number;
            Place_Number-=1;
            if (User_Data_Array[Place_Number] != ""){
                User_Data_Array[Place_Number] = "";
                for (0; i<Array_Size; i++)
                {
                    cout << "Place Number " << i+1 << " " << User_Data_Array[i] << endl;
                };
                i = 0;
                cout<<"Enter (Y/N)";
                cin>>Chice;
            }else{
                cout << "Please Use Insert Mode" << endl;
                main();
            };
        }
        main();
    }
    else
    {
        cout << "Invalid Input";
        main();
    }

    return 0;
}
