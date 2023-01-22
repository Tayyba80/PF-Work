#include<iostream>
using namespace std;
void triangle( int rows);
void triangle2( int rows);
main()
{
  int rows;
  cout<<"Enter number of rows:";
  cin>>rows;
  triangle( rows);
  triangle2( rows);
}
void triangle( int rows)
{
    for(int i=1;  i<=rows; i++)
    {
        for(int w=rows; w>=i ; w--)
        {
            cout<<" ";
        }
         for(int k=1; k<=i ; k++)
        {
            cout<<"#";
        }
      cout<<endl;
    }
}
void triangle2( int rows)
{
    for(int i=1;  i<=rows; i++)
    {
        for(int w=1; w<=i ; w++)
        {
            cout<<" ";
        }
         for(int k=rows; k>=i ; k--)
        {
            cout<<"#";
        }
       cout<<endl;
    }
}
