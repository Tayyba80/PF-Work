#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void printa();
void printw();
void printb();
void printi();
void prints();

main()
{
   system("cls");
  
    
    printa();
    
    printw();
   
    printb();
   
    printi();
   
    prints();
}
void printa()
  {
     cout<<"      ###      "<<endl;
     cout<<"     #   #     "<<endl;
     cout<<"    #     #    "<<endl;
     cout<<"    #######    "<<endl;
     cout<<"    #     #    "<<endl;
     cout<<"    #     #    "<<endl;
 }

void printw()
  {
     cout<<"#                  #"<<endl;               
     cout<<" #                #"<<endl;  
     cout<<"  #      ##      #"<<endl;  
     cout<<"   #    #  #    #  "<<endl;  
     cout<<"    #  #    #  #"<<endl;  
     cout<<"     ##      ##"<<endl;  

  }

void printb()
  {
     cout<<"      ###      "<<endl;
     cout<<"     #   #     "<<endl;
     cout<<"    #     #    "<<endl;
     cout<<"    #######    "<<endl;
     cout<<"    #     #    "<<endl;
     cout<<"    #     #    "<<endl;
  }

void printi()
  {
     cout<<"###"<<endl;
     cout<<" #"<<endl;
     cout<<" #"<<endl;
     cout<<" #"<<endl;
     cout<<" #"<<endl;
     cout<<"###"<<endl;
  }

void prints()
  {
     cout<<"  # # # # "<<endl;
     cout<<" #"<<endl;
     cout<<" #  "<<endl;
     cout<<"  # # # #"<<endl;
     cout<<"         #"<<endl;
     cout<<"         #"<<endl;
     cout<<"  # # # #"<<endl;

  }

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
