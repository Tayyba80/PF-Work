#include<iostream>
using namespace std;

main()
{
  int hour ,min,add;
  cout<<"Enter hour :";
  cin>>hour;
  
  cout<<"Enter minute:";
  cin>>min;
  
  add=min+15;
  
  if(add<=59)
  {
    cout<<"Time after 15 minutes is :"<<hour<<"hour and:"<<add<<"minutes"<<endl;
  }
  if(add>59)
  {
   hour=hour+1;
   min=add-60;
  
  if(hour==24)
  {
  hour=0;
  min=add-60;
  cout<<"Time after 15 minutes is:"<<hour<<"hour and:"<<min<<"minutes:"<<endl;
  }
  
  cout<<"Time after 15 minutes is:"<<hour<<"hour and:"<<min<<"minutes:"<<endl;
  }
}