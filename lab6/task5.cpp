#include<iostream>
using namespace std;
float totalIncome( int rows, int column, string screenType);
main()
{
    int rows,column;
    string screenType;
    float amount;
    cout<<"Enter num of rows:";
    cin>>rows;
    cout<<"Enter num of column:";
    cin>>column;
    cout<<"Enter screen type:";
    cin>>screenType;
    amount=totalIncome( rows,column, screenType);
    cout<<"Your amount is:"<<amount;

}
float totalIncome( int rows, int column, string screenType)
{
    float amount;
    if(screenType=="premier")
    {
        amount=12*rows*column;
    }
    else if(screenType=="normal")
    {
        amount=7*rows*column;
    }
    else if(screenType=="discount")
    {
        amount=5*rows*column;
    }
    return amount;
}
