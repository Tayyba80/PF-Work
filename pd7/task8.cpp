#include<iostream>
using namespace std;
void amount(int lines);

main()
{
   int lines;
   cout<<"Enter lines of triangle:";
   cin>>lines;
   amount( lines);
}
void amount(int lines)
{
    int dotsAmount=0;
    for(int i=1; i<=lines; i++)
    {
       dotsAmount=dotsAmount+i;
    }
    cout<<dotsAmount;
}