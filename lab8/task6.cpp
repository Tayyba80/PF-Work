#include<iostream>
using namespace std;
main()
{
    bool alreadyPresent=false;
    int size,num;
    cout<<"Enter size:";
    cin>>size;

    int number[size];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter number:";
        cin>>number[i];
    }
     cout<<"Enter another number:";
     cin>>num;

    for(int i=0;i<size;i++)
    {
        if(number[i]==num)
        {
            alreadyPresent=true;
        }
    }
    if(alreadyPresent==true)
    {
        cout<<"Already present";
    }
    else
    {
        cout<<"Not present:";
    }
    
    
}