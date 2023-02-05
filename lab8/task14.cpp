#include<iostream>
using namespace std;
main()
{
    int number[4];
    float total1,total2,total3,total4,amount;
    for(int i=0;i<4;i++)
    {
        cout<<"Enter a number:";
        cin>>number[i];
    }
    total1=number[0]*0.25;
    total2=number[1]*0.10;
    total3=number[2]*0.05;
    total4=number[3]*0.01;
    float sum=total1+total2+total3+total4;

    cout<<"Enter amount you have:";
    cin>>amount;

    if(sum<amount)
    {
        cout<<"False";
    }
    else
    {
        cout<<"True";
    }

}