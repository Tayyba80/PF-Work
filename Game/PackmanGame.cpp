#include<iostream>
#include<windows.h>

using namespace std;
void gotoxy(int x,int y);
void gotoab(int a, int b);
void gotocd(int c, int d);
void erase(int x, int y);
void printmaze();
void printp(int x,int y);
char getcharAtxy(short int x, short int y);
void printg(int a,int b);
void placeg(int c, int d);

main()
{
  int x=3,y=3,b=4,a=7,c=6,d=16;
  int score=0;
  bool gameruning = true;

  system("cls");
  printmaze();
  printp(x,y);
  gotoxy(5,24);
  cout<<"score :"<<score;
  
   
 while(gameruning)
 {
    if(GetAsyncKeyState(VK_LEFT))
    {
        char nextlocation= getcharAtxy(x-1,y);
        if (nextlocation== ' ')
        {
             erase( x, y );
             x=x-1;
             printp(x,y);
        }
         if(nextlocation=='-')
        {
        	erase(x,y);
        	x=x-1;
        	printp(x,y);
        	score=score+2;
        	gotoxy(5,24);
        	cout<<"score :"<<score;
		}
    }

     if(GetAsyncKeyState(VK_RIGHT))
    {
        char nextlocation= getcharAtxy(x+1,y);
        if (nextlocation== ' ')
        {
             erase( x, y );
             x=x+1;
             printp(x,y);
        }
         if(nextlocation=='-')
        {
        	erase(x,y);
        	x=x+1;
        	printp(x,y);
        	score=score+2;
        	gotoxy(5,24);
        	cout<<"score :"<<score;
		}
    }

     if(GetAsyncKeyState(VK_UP))
    {
        char nextlocation= getcharAtxy(x,y-1);
        if (nextlocation== ' ')
        {
             erase( x, y );
             y=y-1;
             printp(x,y);
        }
         if(nextlocation=='-')
        {
        	erase(x,y);
        	y=y-1;
        	printp(x,y);
        	score=score+2;
        	gotoxy(5,24);
        	cout<<"score :"<<score;
		}
    }

     if(GetAsyncKeyState(VK_DOWN))
    {
        char nextlocation= getcharAtxy(x,y+1);
        if (nextlocation== ' ')
        {
             erase( x, y );
             y=y+1;
             printp(x,y);
        }
         if(nextlocation=='-')
        {
        	erase(x,y);
        	y=y+1;
        	printp(x,y);
        	score=score+2;
        	gotoxy(5,24);
        	cout<<"score :"<<score;
		}
    }

     if(GetAsyncKeyState(VK_ESCAPE))
    {
        gameruning=false;
    }
    Sleep(100);
	
	printg( a, b);
	if(b<14)
	{
	  b=b+1;
    }
	if(b==14)
	{
	 gotoab(a,b-1);
	 cout<<" ";
	 b=4;
	}
	
	placeg(c,d);
	if(c<65)
	{
	  c=c+1;		
	}
	if(c==65)
	{
	  gotocd(c-1,d);
	  cout<<" ";
	  c=6;	
	}
 }
 
}

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getcharAtxy(short int x, short int y)
{
 CHAR_INFO ci;
 COORD xy={0,0};
 SMALL_RECT rect ={x, y, x, y};
 COORD coordBufSize;
 coordBufSize.X=1;
 coordBufSize.Y=1;
 return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' '; 
}
void erase(int x, int y)
{
  gotoxy(x,y);
  cout<<" ";
}
void printmaze()
{
 cout<<"##########################################################################"<<endl;
 cout<<"||-- ----------------------------------------------------------   ------||"<<endl;                                              
 cout<<"||   %%%%%%%%%%%%%%%%%%%        --     %%%%%%%%%%%%%%%%  |%|--     %%%% ||"<<endl;                                             
 cout<<"||              |%|  |%|     |%|--     |%|          |%|  |%|--      |%| ||"<<endl;       
 cout<<"||              |%|  |%|     |%|--     |%|          |%|  |%|--      |%| ||"<<endl;                                           
 cout<<"||              %%%%%%%%  - - |%|--     %%%%%%%%%%%%%%%%  |%|--    %%%%-||"<<endl;                       
 cout<<"||              |%|      - - |%|--    ----------------- |%| --         -||"<<endl;    
 cout<<"||              %%%%%%%% - - |%|--     %%%%%%%%%%%%%    |%| --     %%%%-||"<<endl;  
 cout<<"||                  |%|               |%|--------       |%| --      |%|-||"<<endl; 
 cout<<"||        --------- |%|  -            |%|--------|%|        --      |%|-||"<<endl;     
 cout<<"||--|%|      |%|%%%|%| |%|- |%|             --------|%|        --   |%|-||"<<endl; 
 cout<<"||--|%|      |%|   |%|--     %%%%%%%%%%%%   --------|%|        --|%|-   ||"<<endl;   
 cout<<"||--|%|      |%|   |%|--            ---|%|      %%%%%%%%       --|%|-   ||"<<endl;                     
 cout<<"||--|%|                             ---|%|                 |%|   --|%|- ||"<<endl;        
 cout<<"||--|%|      %%%%%%%%%%%            ---|%|%%%%%%           |%| --|%|-%%%||"<<endl;       
 cout<<"||------------------------------------------------------   |%| --|%|----||"<<endl;       
 cout<<"||                                                                ------||"<<endl;                                              
 cout<<"||--|%|  |%|  |%|--          %%%%%%%%%%%%  ---------|%|    |%| --|%|--  ||"<<endl;                                             
 cout<<"||--|%|  |%|  |%|--                ---|%|      %%%%%%%%    |%| --|%|--  ||"<<endl;                                         
 cout<<"||--|%|           -                ---|%|                  |%| --|%|--  ||"<<endl;                      
 cout<<"||--|%| %%%%%%%%%%                 ---|%| %%%%%%%%%%%%     |%| --|%|-%%%||"<<endl;                                          
 cout<<"||----------------------------------------------------     |%| ---------||"<<endl;        
 cout<<"||------------------------------------------------------       ---------||"<<endl; 
 cout<<"##########################################################################"<<endl; 
 }
void printp(int x,int y)
{
  gotoxy(x,y);
  cout<<"p";
}
void gotoab(int a,int b)
{
COORD coordinates;
coordinates.X=a;
coordinates.Y=b;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
 void printg(int a,int b)
 {
   gotoab(a,b-1);
   cout<<" ";
   gotoab(a,b);
   cout<<"G";
   Sleep(200);
 }
void placeg(int c, int d)
{
  gotocd(c-1,d);
  cout<<" ";
  gotocd(c,d);
  cout<<"G";
  Sleep(200);  
}
void gotocd(int c,int d)
{
COORD coordinates;
coordinates.X=c;
coordinates.Y=d;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
