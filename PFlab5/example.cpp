#include<iostream>
using namespace std;
float divide(float num1,float num2);
int sum(int num1,int num2);
main()
{
 int num1,num2,add;
 float div;
 cout<<"Enter num1:";
 cin>>num1;
 
 cout<<"Enter num2:";
 cin>>num2;
  div=divide( num1,num2);
  cout<<"Division is:"<<div<<endl;
  add=sum( num1,num2);
  cout<<"Sum  is:"<<add<<endl;
 
}
float divide(float num1,float num2)
{
 float div;
 div=num1/num2;
 return div;
}
int sum(int num1,int num2)
{
 int add;
 add=num1+num2;
 return add;
}