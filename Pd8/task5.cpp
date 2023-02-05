#include <iostream>
using namespace std;
main()
{
    int size,time;
    cout<<"Enter size of array:";
    cin>>size;

    cout<<"Enter number of time you want to do transformation:";
    cin>>time;

    int number[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter numbers:";
        cin>>number[i];
    }
    for(int i=0;i<size;i++)
    {
        if(number[i]%2==0)
        {
            number[i]=number[i]-(2*time);
        }
        else
        {
            number[i]=number[i]+(2*time);
        }
        cout<<number[i]<<" ";
    }

}