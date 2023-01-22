#include<iostream>
using namespace std;
void check(int amount);
main()
{
    int amount;
    cout<<"Enter amount of sequence:";
    cin>>amount;
    check(amount);
}
void check(int amount)
{
    int num=0;
    for(int i=1; i<=amount; i++)
    {
        if(i%4==0)
        {
           num=i*10;
           cout<<num;
           cout<<",";
        }
        else
        {
        cout<<i<<",";
        }
    }
}