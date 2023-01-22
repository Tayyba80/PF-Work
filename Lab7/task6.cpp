#include<iostream>
using namespace std;
int calculateGCD(int num1, int num2);
int calculateLCM(int num1, int num2);

main()
{
  int num1, num2;
  cout<<"Enter number 1:";
  cin>>num1;

  cout<<"Enter num2:";
  cin>>num2;

 int lcm= calculateLCM(num1,num2);
 cout<<lcm;
}
int calculateGCD(int num1, int num2)
{ int gcd=0;

  for(int i=1; i<=num1; i++)
  {
    if(num1%i==0 && num2%i==0 )
    {
       gcd=i;
    }
  }return gcd;
 
}
int calculateLCM(int num1, int num2)
{
  int gcd,lcm;
  gcd=calculateGCD(num1,num2);
  cout<<gcd<<endl;
  lcm=(num1*num2)/gcd;
  return lcm;
}
