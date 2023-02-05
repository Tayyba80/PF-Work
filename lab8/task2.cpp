#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter word:";
    getline(cin,name);

    int i=0;
    int count=0;
    while(name[i]!='\0')
    {
        count++;
        i++;
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