#include<iostream>
using namespace std;
void sum(int num1,int num2);
void product(int num1,int num2);
void divide(int num1,int num2);
void subtraction(int num1,int num2);
main()
 {
  int num1,num2;
  char operate;
  cout<<"Enter num 1:";
  cin>>num1;

  cout<<"Enter num 2:";
  cin>>num2;
 
  cout<<"Enter operation +,-,*,/:";
  cin>>operate;

  if(operate=='+')
    { 
      sum(num1,num2);
    }
  if(operate=='*')
    { 
      product(num1,num2);
    }
  if(operate=='-')
    { 
      subtraction(num1,num2);
    }
  if(operate=='/')
    { 
      divide(num1,num2);
    }
 }
  void sum(int num1,int num2)
     {
      int add;
      add=num1+num2;
      cout<<"your sum is:"<<add;
     }
  void product(int num1,int num2)
     {
      int multiply;
      multiply=num1*num2;
      cout<<"your product is:"<<multiply;
     }
  void subtraction(int num1,int num2)
     {
      int sub;
      sub=num1-num2;
      cout<<"your sub is:"<<sub;
     }
  void divide(int num1,int num2)
     {
      int div;
      div=num1/num2;
      cout<<"your division is:"<<div;
     }
   