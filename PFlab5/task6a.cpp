#include<iostream>
#include<cmath>
using namespace std;

main()
{
 while(true)
{
 int num,remainder;
 cout<<"Enter number except(11-19):";
 cin>>num;
 
 remainder=num%10;
 num=num/10;
 
 if(num==2)
 {
   cout<<"Twenty";
 }
   if(num==3)
 {
   cout<<"Thirty";
 }
  if(num==4)
 {
   cout<<"Fourty";
 }
  if(num==5)
 {
   cout<<"Fifty";
 }
  if(num==6)
 {
   cout<<"Sixty";
 }
  if(num==7)
 {
   cout<<"Seventy";
 }
  if(num==8)
 {
   cout<<"Eighty";
 }
  if(num==9)
 {
   cout<<"Ninty";
 }
  if (remainder==2)
  {
     cout<<"two"<<endl;
  }
  if (remainder==1)
  {
     cout<<"One"<<endl;
  }
  if (remainder==3)
  {
     cout<<"three"<<endl;
  }
  if (remainder==4)
  {
     cout<<"four"<<endl;
  }
  if (remainder==5)
  {
     cout<<"five"<<endl;
  }
  if (remainder==6)
  {
     cout<<"six"<<endl;
  }
  if (remainder==7)
  {
     cout<<"seven"<<endl;
  }
  if (remainder==8)
  {
     cout<<"eight"<<endl;
  }
  if (remainder==2)
  {
     cout<<"two"<<endl;
  }
  if (remainder==9)
  {
     cout<<"nine"<<endl;
  }
  
}  
}