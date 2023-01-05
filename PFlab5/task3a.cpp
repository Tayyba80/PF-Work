#include<iostream>
#include<cmath>
using namespace std;
int istrue(int num1);

main()
{
	int num1;
   cout<<"Enter number:";
   cin>>num1;
   istrue( num1);
}
int istrue(int num1)
{
  int rem,remain,remainder,rem1,remain1,remainder1;
  rem=num1%10;
  rem1=num1/10;
 
  remain=rem1%10;
  remain1=rem1/10;
  
  
  remainder=remain1%10;
  remainder1=remain1/10;

  
   if(rem==remainder)
   {
     cout<<"Given value is symmetrical:";
   }
  if(rem!=remainder)
   {
     cout<<"Given value is unsymmetrical:";
   }

}