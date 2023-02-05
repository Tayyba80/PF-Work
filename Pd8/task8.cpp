#include <iostream>
using namespace std;
main()
{
    int size ,count;
    cout<<"enter size of string:";
    cin>>size;
    string colr[size];
    count=size*2;
   
    for(int i=0;i<size;i++)
    {
        cout<<"Enter colr:";
        cin>>colr[i];
    }

    for(int i=1;i<size;i++)
    {
        if(colr[i-1]!=colr[i]) // to compare the values in an array with one another
        {
            count++;
        }
    }
    cout<<count;
}