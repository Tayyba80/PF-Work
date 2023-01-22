#include<iostream>
using namespace std;
void triangle( int rows);
main()
{
  int rows;
  cout<<"Enter number of rows:";
  cin>>rows;
  triangle( rows);
}
void triangle( int rows)
{
    for(int i=rows; i>=1; i--)
    {
        for(int j=i; j<=rows; j++)
        {
            cout<<"#";
        }
        for(int k=i; k>=2; k--)
        {
            cout<<" ";
        }
         for(int j=i; j>=2; j--)
        {
            cout<<" ";
        }
         for(int k=i; k<=rows; k++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
}
