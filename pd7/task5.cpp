#include<iostream>
using namespace std;
void percent(int amount,int numbers);
main()
{
    int amount,numbers;
    cout<<"Enter amount of numbers:";
    cin>>amount;
    percent(amount,numbers);
}
void percent(int amount,int numbers)
{
    float p1=0,p2=0,p3=0;
    for(int i=1; i<=amount; i++)
    {
        cout<<"Enter numbers:";
        cin>>numbers;

        if(numbers%2==0)
        {
            p1=p1+1;
        }
        if(numbers%3==0)
        {
            p2=p2+1;
        }
        if(numbers%4==0)
        {
            p3=p3+1;
        }
    }
    cout<<"p1="<<(p1/amount)*100<<"%"<<endl;
    cout<<"p2="<<(p2/amount)*100<<"%"<<endl;
    cout<<"p3="<<(p3/amount)*100<<"%"<<endl;

}