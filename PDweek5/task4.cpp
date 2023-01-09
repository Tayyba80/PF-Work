#include<iostream>
#include<cmath>
using namespace std;

main()
{
  float hour,days,worker,workday,whour,thour,complete,complete2,actual;
  float notwork;
  cout<<"Enter neede hours to complete a task:";
  cin>>hour;

  cout<<"Enter days that frim has:";
  cin>>days;

  cout<<"Enter the number of worker:";
  cin>>worker;

  notwork=(days*10)/100;
  cout<<notwork<<endl;
  
  workday=days-notwork;
  cout<<workday;

  whour=workday*10;
  cout<<"working hour"<<whour<<endl;
  thour=worker*whour;
  cout<<"all the workers have total hour ="<<thour<<endl;

  complete=thour-hour;
  complete2=hour-thour;
  if(thour>hour)
  {
     cout<<"yes!"<<complete<<" hour left";

  }
  if(thour<hour)
  {
     cout<<"Not enough time!"<<complete2<<" hour needed";

  }

}
