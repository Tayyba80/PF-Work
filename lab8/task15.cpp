#include<iostream>
using namespace std;
main()
{
  int size;
  cout<<"Enter size of array:";
  cin>>size;
  float num[size];
  
  for(int i=0;i<size;i++)
  {
    cout<<"Enter numbers:";
    cin>>num[i];
  }
  cout<<"Reverse order is:";

   for(int i=size-1;i>=0;i--)
  {
    cout<<num[i]<<" ";
  }
  cout<<endl;
}
