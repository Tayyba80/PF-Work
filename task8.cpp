#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void equal(int num1,int num2);

main()
{
 system("cls");
 while(true){
  int num1,num2;
  cout<<"Enter num1:";
  cin>>num1;
  cout<<"Enter num2:";
  cin>>num2;
  gotoxy(8,4);
  equal(num1,num2);
}
}

void equal(int num1,int num2)
{
    if(num1==num2)
       {
         cout<<"True";
        }

    if(num1!=num2)
       {
         cout<<"False";
        }
}



void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
