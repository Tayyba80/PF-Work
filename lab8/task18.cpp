#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter size of array:";
    cin>>size;

    int number[size];
     
    for(int i=0; i<size;i++)
    {
        cout<<"Enter number:";
        cin>>number[i];
    }

    for(int i=size-1; i>=0;i--)
    {
        cout<<number[i]<<" ";
    }
}
