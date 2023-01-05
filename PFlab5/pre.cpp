#include<iostream>
#include<cmath>
using namespace std;

main() 
{
  float num1,num2,result;
  
  cout<<"Enter  number 1:";
  cin>>num1;
  
  cout<<"Enter  number 2:";
  cin>>num2;
  
  result=max(num1,num2);
  cout<<"Greater num is:"<<result<<endl;
  
  result=min(num1,num2);
  cout<<"Minimum num is:"<<result<<endl;
  
  result=sqrt(num1);
  cout<<"Square root of num 1 is:"<<result<<endl;
  
  result=ceil(num2);//decimal ko round off kr k us sy agky num py ly jati ha 3.9 =4
  cout<<"ceil of num 2 is:"<<result<<endl;
  
  result=floor(num1);//decimal ko round off kr k us sy previous num py ly jati ha 3.9 =3
  cout<<"floor of num 1 is:"<<result<<endl;
  
  result=pow(num1,num2);
  cout<<"power of num 2 is:"<<result<<endl;
  
  result=cbrt(num1);
  cout<<"Cube root of num 1 is:"<<result<<endl;
   
}