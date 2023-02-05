#include<iostream>
using namespace std;
main()
{
    int count=0;
    string word;
    cout<<"Enter word:";
    cin>>word;

    
    for(int i=0; word[i]!='\0'; i++)
    {
      count++;
    }
    if(count%2==0)
    {
        cout<<"Even";
    }
     if(count%2!=0)
    {
        cout<<"Odd";
    }
}
