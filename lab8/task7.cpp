#include<iostream>
using namespace std;
main()
{
    int size,num,scalar;
    cout<<"Enter size of array:";
    cin>>size;

    int number[size];
    for(int i=0; i<size;i++)
    {
        cout<<"Enter number:";
        cin>>number[i];
    }
    cout<<"Enter another number you want to multiply with array:";
    cin>>num;

    for(int i=size-1; i>=0;i--)
    {
       scalar=number[i]*num;
       cout<<scalar<<endl;
    }
}