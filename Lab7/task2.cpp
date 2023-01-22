#include<iostream>
using namespace std;
void printFibonacci(int num,int sum, int num1, int num2);
main()
{
  int num,sum,num1=0,num2=1;
  cout<<"Enter a number:";
  cin>>num;
  cout<<num1<<endl;
  cout<<num2<<endl;
  printFibonacci(num, sum, num1, num2);
}
void printFibonacci(int num,int sum, int num1, int num2)
{
  for(int i=1; i<=num-2  ;i++)
  {
    sum=num1+num2;
    cout<<sum<<endl;
    num1=num2;
    num2=sum;
   
  }
}
