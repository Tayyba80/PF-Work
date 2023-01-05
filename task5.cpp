#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void pname();

main()
{

 pname();

}

void pname()
{ 
  gotoxy(20,8);
  cout<<"               #######      ###      ###   # # # # #         ###                                  "<<endl;
  gotoxy(20,9);
  cout<<"                  #       #     #     #    #        #      #     #                          "<<endl;                 
  gotoxy(20,10);
  cout<<"                  #      #       #    #    #         #    #       #                            "<<endl;
  gotoxy(20,11);
  cout<<"                  #     # # # # # #   #    # # # # #     # # # # # #                         "<<endl;
  gotoxy(20,12);
  cout<<"                  #     #         #   #    #        #    #         #                           "<<endl;
  gotoxy(20,13);
  cout<<"                  #     #         #   #    #         #   #         #                             "<<endl;
  gotoxy(20,14);
  cout<<"                  #     #         #  ###   # # # # #     #         #                              "<<endl;

}


void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}using namespace std;