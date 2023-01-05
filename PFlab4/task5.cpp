#include<iostream>
using namespace std;
void even(int num);
main()
{
  while(true)
{
  int num;
  cout<<"Enter a number:";
  cin>>num;
  even(num);
 }
}
  void even(int num)
 {
   if(num%2==0)
    {
     cout<<"The entered number is an even number"<<endl;
    }

   if(num%2!=0)
    {
     cout<<"The entered number is an odd number"<<endl;
    }
 }
