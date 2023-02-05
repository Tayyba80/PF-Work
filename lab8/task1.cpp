#include<iostream>
using namespace std;
main()
{
    int size,sum=0;
    float average=0;
    cout<<"Enter size of array:";
    cin>>size;

    int number[size];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter numbers:";
        cin>>number[i];
        sum=sum+number[i];
    }
    cout<<"sum is:"<<sum<<endl;
    average=sum/size;
    cout<<"average is:"<<average<<endl;
}