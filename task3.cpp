#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void printmaze();
void printp(int x,int y);

 main()
 {system ("cls");
  printmaze();
  int x=3,y=3;
  printp(x,y);

 }
 void printmaze()
 {
  cout<<"##############################"<<endl;
  cout<<"#                            #"<<endl;
  cout<<"#                            #"<<endl;
  cout<<"#                            #"<<endl; 
  cout<<"#                            #"<<endl;
  cout<<"#                            #"<<endl;
  cout<<"#                            #"<<endl;
  cout<<"#                            #"<<endl;
  cout<<"#                            #"<<endl;
  cout<<"#                            #"<<endl;
  cout<<"#                            #"<<endl;
  cout<<"##############################"<<endl;
}
void printp(int x,int y)
{
   x=3;
   y=3;
   gotoxy(x-1,y);
   cout<<"";
   gotoxy(x,y);
   cout<<"p";
   Sleep(1000);
}

 

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
