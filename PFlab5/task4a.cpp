#include<iostream>
using namespace std;
int even(int num);
main()
{
 int num;
 cout<<"Enter num:";
 cin>>num;
 even(num);
}
int even(int num)
{
  int num1,sum=0;
  num1=num%10;
  sum=sum+num1;
  
  num=num/10;
  num1=num%10;
  sum=sum+num1;
  
  num=num/10; 
  num1=num%10;
  sum=sum+num1;
  
  num=num/10;  
  num1=num%10;
  sum=sum+num1;
  
  num=num/10; 
  num1=num%10;
  sum=sum+num1;
  
  if(sum%2==0)
  {
     cout<<"num is Evenish:"<<endl; 
  }
    if(sum%2!=0)
  {
     cout<<"num is Oddish:"<<endl; 
  }
}