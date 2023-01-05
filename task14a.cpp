#include<iostream>
#include<windows.h>
using namespace std;
void universe();
void compare(float aggrigate1, float aggrigate2, string name1,string name2);
void aggrigate1(int marks1,int inter1,int ecat1, float gate1,string name1);
void aggrigate2(int marks2,int inter2,int ecat2,float gate2,string name2);
main()
{
 int choice,marks1,marks2,inter1,inter2,ecat1,ecat2;
 string name1,name2;
 char key;
 float gate1,gate2;
 
  universe();
  cout<<"Press 1 to enter details of First student:"<<endl;
  cout<<"Press 2 to enter details of second student:"<<endl;
  cout<<"Press 3 to calculate the aggrigate of First student:"<<endl;
  cout<<"Press 4 to calculate the aggrigate of second student:"<<endl;
  cout<<"Press 5 to display the student with RollNumber 1:"<<endl;
  cout<<"Enter choice:";
  cin>>choice;
  cout<<"you choosed:"<<choice<<endl;
  
     if(choice==1)
	 {
	   system("cls");
	   cout<<"you choosed:"<<choice<<endl;
	   cout<<"Enter your name:";
	   cin>>name1;
	   cout<<"Enter you matric marks:";
	   cin>> marks1;
	   cout<<"Enter your inter marks:";
	   cin>>inter1;
	   cout<<"Enter your ecat marks:";
	   cin>>ecat1;
	   cout<<"Enter any key to continue:";
	   cin>>key;
	   
	    system("cls");
		 universe();
		 cout<<"Press 1 to enter details of First student:"<<endl;
         cout<<"Press 2 to enter details of second student:"<<endl;
         cout<<"Press 3 to calculate the aggrigate of First student:"<<endl;
         cout<<"Press 4 to calculate the aggrigate of second student:"<<endl;
         cout<<"Press 5 to display the student with RollNumber 1:"<<endl;
		 cout<<"Enter choice:";
         cin>>choice;
     }
	   if(choice==2)
	 {
	   system("cls");
	   cout<<"you choosed:"<<choice<<endl;
	   cout<<"Enter your name:";
	   cin>>name2;
	   cout<<"Enter you matric marks:";
	   cin>> marks2;
	   cout<<"Enter your inter marks:";
	   cin>>inter2;
	   cout<<"Enter your ecat marks:";
	   cin>>ecat2;
	   cout<<"Enter any key to continue:";
	   cin>>key;
	   
	   system("cls");
	   universe();
	   cout<<"Press 1 to enter details of First student:"<<endl;
       cout<<"Press 2 to enter details of second student:"<<endl;
       cout<<"Press 3 to calculate the aggrigate of First student:"<<endl;
       cout<<"Press 4 to calculate the aggrigate of second student:"<<endl;
       cout<<"Press 5 to display the student with RollNumber 1:"<<endl;
	   cout<<"Enter choice:";
       cin>>choice;  
	 }
	  if(choice==3)
	 {
	   system("cls");
	   cout<<"you choosed:"<<choice<<endl;
	   aggrigate1(marks1,inter1,ecat1,gate1,name1);
	    cout<<"Enter any key to continue:";
	   cin>>key;
	
	   system("cls");
	   universe();
	   cout<<"Press 1 to enter details of First student:"<<endl;
       cout<<"Press 2 to enter details of second student:"<<endl;
       cout<<"Press 3 to calculate the aggrigate of First student:"<<endl;
       cout<<"Press 4 to calculate the aggrigate of second student:"<<endl;
       cout<<"Press 5 to display the student with RollNumber 1:"<<endl;
	   cout<<"Enter choice:";
       cin>>choice;  
	 } 
	 if(choice==4)
	 {
	   system("cls");
	   cout<<"you choosed:"<<choice<<endl;
	   
	   aggrigate2( marks2,inter2, ecat2, gate2,name2);
	    cout<<"Enter any key to continue:";
	   cin>>key;
	   system("cls");
	   universe();
	   cout<<"Press 1 to enter details of First student:"<<endl;
       cout<<"Press 2 to enter details of second student:"<<endl;
       cout<<"Press 3 to calculate the aggrigate of First student:"<<endl;
       cout<<"Press 4 to calculate the aggrigate of second student:"<<endl;
       cout<<"Press 5 to display the student with RollNumber 1:"<<endl;
	   cout<<"Enter choice:";
       cin>>choice;  
	 } 
     if(choice==5)
	 {
	   system("cls");
	   cout<<"you choosed:"<<choice<<endl;
       	   
	   compare(gate1,gate2,name1,name2);
	    cout<<"Enter any key to continue:";
	   cin>>key;
	   
       system("cls");
	   universe();
	   cout<<"Enter choice:";
       cin>>choice;  
	 } 
    
}

void universe()
{
  cout<<                    "UET"                              <<endl;

  cout<<"#####################################################"<<endl;
  cout<<"#                                                   #"<<endl;
  cout<<"#             UNIVERSITY ADMISSION                  #"<<endl;
  cout<<"#                                                   #"<<endl;
  cout<<"#                     AND                           #"<<endl;
  cout<<"#                                                   #"<<endl;
  cout<<"#               MANAGEMENT SYSTEM                   #"<<endl;
  cout<<"#                                                   #"<<endl;
  cout<<"#                                                   #"<<endl;
  cout<<"#####################################################"<<endl;
}
void aggrigate1(int marks1,int inter1,int ecat1, float gate1, string name1)
{
  gate1=((marks1/1100)*100)*0.3+((inter1/1100)*100)*0.3+((ecat1/400)*100)*0.4;
  cout<<"Aggrigate of"<<name1 <<"is:"<<gate1<<endl;	
}
void aggrigate2(int marks2,int inter2,int ecat2,float gate2, string name2)
{
  gate2=((marks2/1100)*100)*0.3+((inter2/1100)*100)*0.3+((ecat2/400)*100)*0.4;
  cout<<"Aggrigate of"<<name2<< "is:"<<gate2<<endl;
}

void compare(float gate1, float gate2, string name1, string name2)
{
  aggrigate1( marks1, inter1, ecat1, gate1, name1);
  aggrigate2( marks2, inter2, ecat2, gate2, name2);

  if(aggrigate1<aggrigate2)
  {
   cout<<"Roll number 1 is:"<<name2;
  }

  if(gate1>gate2)
  {
   cout<<"Roll number 1 is:"<<name1;
  }
}
