#include<iostream>
using namespace std;
main()
{
    bool isSmallest=false;
    int size;
    cout<<"Enter size of array:";
    cin>>size;
    int number[size];
    int smallest=number[size];

    for(int i=0;i<size;i++)
    {
      cout<<"Enter number:";
      cin>>number[i];
    }
    for(int i=0;i<size;i++)
    {
        if(smallest>number[i])
        {
            smallest=number[i];
        }
    }
    cout<<"smallest number is:"<<smallest;

}