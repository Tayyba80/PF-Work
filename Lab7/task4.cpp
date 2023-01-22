#include<iostream>
using namespace std;
void totalDigit(int num, int digit);
main()
{
    int num,digit;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"Enter a digit you want to calculate:";
    cin>>digit;

    totalDigit(num,digit);
}
void totalDigit(int num, int digit)
{
    int total=0,remainder=0;
    while(num>0)
    {
     remainder= num%10;
     num=num/10;
     if(remainder==digit)
     {
      total++;
     }
    }
    cout<<total;
}
