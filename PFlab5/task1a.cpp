#include<iostream>
using namespace std;
int multiply(int num); 
main()
{
  int num,mul;
  cout<<"Enter a number:";
  cin>>num;
  mul=multiply( num);
  cout<<"Result is:"<<mul;
}
int multiply(int num)
{
  int mul;
  mul=num*5;
  return mul;
}