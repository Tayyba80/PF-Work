#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void printmaze();
void printp(int x,int y);

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

main()
{
  system("cls");
  int x=3,y=3;
  printmaze();
    while(true)
      {
          printp(x,y);
          if(x<15)
           {
             x=x+1;
           }

          if(x==15)
           {
             gotoxy(x-1,y);
             cout<<" ";
             x=3;
           }
      }
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
  gotoxy(x-1,y);
  cout<<" ";
  gotoxy(x,y);
  cout<<"P";
  Sleep(200);
}