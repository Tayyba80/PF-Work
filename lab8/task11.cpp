#include<iostream>
using namespace std;
main()
{
    int size;
    float num,sum=0;
    cout<<"Enter size of array:";
    cin>>size;
    int number[size];

    for(int i=0; i<size;i++)
    {
      cout<<"Enter resistance:";
      cin>>number[i];

      sum=sum+number[i];
    }
    cout<<sum<<" "<< "ohm";
}