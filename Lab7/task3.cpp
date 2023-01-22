#include<iostream>
using namespace std;
void totalDigit(int num);
main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    totalDigit(num);
}
void totalDigit(int num)
{
    int total=0;
    while(num>0)
    {
      num= num/10;
      total++;
    }
    cout<<total<<endl;
}

