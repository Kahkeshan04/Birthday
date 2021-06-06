#include <iostream> 
#include <windows.h>
using namespace std;

void cake(){
    int colorid = -1;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    cout<<endl;
    
    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout<<"\t\t\t                      !!!!!                         \n";
    
    SetConsoleTextAttribute(h,6);
    cout<<"\t\t\t                      vvvvv                         \n";
    
    cout<<"\t\t\t\t\t      ";
    for(; colorid<9; colorid+=2){
        SetConsoleTextAttribute(h,colorid);
        cout<<"!";
    }
    cout<<endl;

    SetConsoleTextAttribute(h,3);
    cout<<"\t\t\t                    /";
    
    SetConsoleTextAttribute(h,3);
    cout<<"*******";

    SetConsoleTextAttribute(h,3);
    cout<<"\\                       \n";
    cout<<"\t\t\t                   |";

    SetConsoleTextAttribute(h,10);
    cout<<"xxxxxxxxx";

    SetConsoleTextAttribute(h,3);
    cout<<"|                       \n";
    cout<<"\t\t\t                   |";

    SetConsoleTextAttribute(h,14);
    cout<<".'.'.'.'.";

    SetConsoleTextAttribute(h,3);
    cout<<"|                       \n";
    cout<<"\t\t\t                   |";

    SetConsoleTextAttribute(h,3);
    cout<<"+++++++++";

    SetConsoleTextAttribute(h,3);
    cout<<"|                       \n";
    cout<<"\t\t\t               /";

    SetConsoleTextAttribute(h,3);
    cout<<"*****************";

    SetConsoleTextAttribute(h,3);
    cout<<"\\                  \n";
    cout<<"\t\t\t              |";

    SetConsoleTextAttribute(h,10);
    cout<<"xxxxxxxxxxxxxxxxxxx";
    
    SetConsoleTextAttribute(h,3);
    cout<<"|                  \n";
    cout<<"\t\t\t              |";
    
    SetConsoleTextAttribute(h,14);
    cout<<".'.'.'.'.'.'.'.'.'.";
    
    SetConsoleTextAttribute(h,3);
    cout<<"|                  \n";
    cout<<"\t\t\t              |";

    SetConsoleTextAttribute(h,3);
    cout<<"v^v^v^v^v^v^^v^v^v^";

    SetConsoleTextAttribute(h,3);
    cout<<"|                  \n";
    cout<<"\t\t\t         /";

    SetConsoleTextAttribute(h,3);
    cout<<"******************************";
    
    SetConsoleTextAttribute(h,3);
    cout<<"\\            \n";
    cout<<"\t\t\t        |";
     
    SetConsoleTextAttribute(h,10);
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";

    SetConsoleTextAttribute(h,3);
    cout<<"|           \n";
    cout<<"\t\t\t        |";
    
    SetConsoleTextAttribute(h,14);
    cout<<"'.'.'.'.'.'.'.'.'.'.'.'.'.'.'.'.";
    
    SetConsoleTextAttribute(h,3);
    cout<<"|           \n";

    cout<<"\t\t\t        WMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWMWM           \n";
    
    SetConsoleTextAttribute(h,3);
    cout<<"\t\t\t /";

    SetConsoleTextAttribute(h,3);
    cout<<"*********************************************";
    
    SetConsoleTextAttribute(h,3);
    cout<<"\\    \n";
    cout<<"\t\t\t|";
     
    SetConsoleTextAttribute(h,10);
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    
    SetConsoleTextAttribute(h,3);
    cout<<"|    \n";
    cout<<"\t\t\t|";
    
    SetConsoleTextAttribute(h,14);
    cout<<"'.'.'.'.'.'.'.'.'.'.'.'.'.'.'.'.'.'.'.'.'.'.'.'";

    SetConsoleTextAttribute(h,3);
    cout<<"|    \n";
    cout<<"\t\t\t|";
    cout<<"nununununununununununununununununununununununun";
    
    SetConsoleTextAttribute(h,3);
    cout<<"|    \n";

    SetConsoleTextAttribute(h,6);
    cout<<"\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!     \n";

    SetConsoleTextAttribute(h,3);
    cout<<"\t\t\t*************************************************     \n";
}
