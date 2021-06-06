#include <iostream>
#include <windows.h>
#include "Cake.h"
#include "Letters.h"
using namespace std;


main(){
    system("cls");
    string name,choice;
    int colorid = 15;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    cout<<"=================================================================================================================================\n\n";
    cout<<"\n\t\t\t\t\t\t\tONLY FOR DESKPOT \n\n";
    cout<<"\t\t\t\tThis program is specially to wish anyone on their birthday or aniversary, as it contain cake design";
    cout<<"\n\t\t\tBut you can type anything!!  ";
    cout<<"\n\t\t\tHighest character limit for the desktop (1600 x 900) is 11 letters";
    cout<<"\n\n=================================================================================================================================\n\n";
    
    cout<<"\n\tFor the cake type yes : ";
    cin>>choice;

    system("cls");

    cout<<"\nEnter the Sentence / Wish : ";   
    while(cin>>name){
        int txtlen = name.length();
        
        colorid--;
        SetConsoleTextAttribute(h,colorid);

        Num1(name, txtlen);
        Num2(name, txtlen);
        Num3(name, txtlen);
        Num4(name, txtlen);
        Num5(name, txtlen);
        Num6(name, txtlen);
        Num7(name, txtlen);
        Num8(name, txtlen);

        if(cin.peek()=='\n')
        break; //to terminate the input

        if(colorid == 0) colorid = 15;
    }
    if (choice == "yes") 
    cake();
    system("pause");
}