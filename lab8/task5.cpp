#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter size of array:";
    cin>>size;
    int number[size];
    
    int large=0;
    for(int i=0;i<size;i++)
    {
      cout<<"Enter number:";
      cin>>number[i];
    }
    for(int i=0;i<size;i++)
    {
        if(number[i]>large)
        {
            large=number[i];
        }
    }
    cout<<"Largest number is:"<<large;

}
    