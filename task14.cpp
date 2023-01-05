#include<iostream>
using namespace std;
void universe();
void comparision( float ecatm,float sece);
main()
{
  string stud1,stud2;
  float aggrigate,interm,matricm,ecatm,secm,seci,sece,gate;
  while(true)
   {
	 universe();
     cout<<"Enter your name stud 1:";
     cin>>stud1;

     cout<<"Enter your name stud 2:";
     cin>>stud2;

     cout<<"Enter your matric marks stud 1:";
     cin>>matricm;

     cout<<"Enter your inter marks stud1:";
     cin>>interm;

     cout<<"Enter your ecat marksstud1:";
     cin>>ecatm;

     cout<<"Enter your matric marks stud 2:";
     cin>>secm;

     cout<<"Enter your inter marks stud 2:";
     cin>>seci;

     cout<<"Enter your ecat marks stud 2:";
     cin>>sece;

     aggrigate=((interm/1100)*100)*0.3+((matricm/1100)*100)*0.3+((ecatm/400)*100)*0.4;
     cout<<"Aggrigate is:"<<aggrigate<<endl;

     gate=((seci/1100)*100)*0.3+((secm/1100)*100)*0.3+((sece/400)*100)*0.4;
     cout<<"Aggrigate 2 is:"<<gate<<endl;

	 comparision(ecatm,sece);

    }
}
void universe()
{
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
void comparision(float ecatm,float sece)
{
  if(ecatm<sece)
  {
    cout<<"Roll number of student 2 is '1'"<<endl;
	cout<<"Roll number of student 1 is '2'"<<endl;
  }
  
     if(ecatm>sece)
  {
    cout<<"Roll number of student 1 is '1'"<<endl;
    cout<<"Roll number of student 2 is '2'"<<endl;	
  }
}










