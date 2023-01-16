#include<iostream>
using namespace std;
bool sameNumber(int num1,int num2, int num3);
main()
{
    int num1,num2,num3;
    cout<<"Enter num 1:";
    cin>>num1;

    cout<<"Enter num 2:";
    cin>>num2;

    cout<<"Enter num 3:";
    cin>>num3;
     bool result = sameNumber( num1,num2,num3);
     if (result==1)
     {
     	cout<<"Yes!";
	 }
	  if (result==0)
     {
     	cout<<"NO!";
	 }
}
bool sameNumber(int num1,int num2, int num3)
{
    if(num1==num2 && num2==num3)
    {
        return true;
    }
    else
    {
        return false;
    }
}
