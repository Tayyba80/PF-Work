#include<iostream>
using namespace std;
main()
{
    string word;
    int size;
    cout<<"Enter size:";
    cin>>size;

    cout<<"Enter element of array:";
   
    for(int i=0; i<size;i++)
    {
     cin>>word[i];
    }
   
    cout<<endl;
    cout<<"Reverse order of Array :"<<endl;
   for(int i=size-1; i>=0;i--)
   {
      cout<<word[i]<<" ";
   }
   cout<<endl;
}
