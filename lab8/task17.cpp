#include <iostream>
using namespace std;
main()
{
    int number[2];
    int size;
    cout<<"Enter size of array:";
    cin>>size;
    int number2[size];
    int number3[size+2];
    for(int i=0;i<2;i++)
    {
        cout<<"Enter number of 1st array:";
        cin>>number[i];
    }

     for(int x=0;x<size;x++)
    {
        cout<<"Enter number of 2nd array:";
        cin>>number2[x];
    }
     number3[0]=number[0];
     number3[size+1]=number[1];

     for(int i=0; i<size;i++)
     {
        number3[i+1]=number2[i];
     }

      for(int i=0; i<size+2;i++)
     {
       cout<< number3[i]<<" ";
     }

}