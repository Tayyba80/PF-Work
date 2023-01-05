#include<iostream>
using namespace std;
int isgreater(int num1,int num2);
int isminimum(int num1,int num2);
main()
{
 int num1,num2,result;
 cout<<"Enter num 1:";
 cin>>num1;
 
  cout<<"Enter num 2:";
  cin>>num2;
  
  result=isgreater( num1, num2);
  cout<<"Greater num is:"<<result<<endl;
  
  result=isminimum( num1, num2);
  cout<<"Minimum numis:"<<result;
  
}
int isgreater(int num1,int num2)
{
  if(num1>num2)
  {
    return num1;
    //cout<<"Greater num is:"<<num1<<endl;
  }
 
  if(num1<num2)
  {
    return num2;
    //cout<<"Greater num is:"<<num2<<endl;
  }
  return 0;
}
int isminimum(int num1,int num2)
{
  if(num1<num2)
  {
	  return num1;
  }	
	
  if(num1>num2)
  {
	  return num2;
  }		
  return 0;
}