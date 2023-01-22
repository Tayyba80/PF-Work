#include<iostream>
using namespace std;
int digitSum(int num);
main()
{
  int num;
  cout<<"Enter a number:";
  cin>>num;
  int sum=digitSum(num);
  cout<<sum;

}
int digitSum(int num)
{
    int sum=0;
    int remainder=num%10;
    sum=sum+remainder;
  while(num>0)
  {
    num=num/10;
   int remainder=num%10;
    sum=sum+remainder;
  }
  return sum;
    
}