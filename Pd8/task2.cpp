#include <iostream>
using namespace std;
 //string word(counter);
main()
{
   int count=0;
    string word;
    cout<<"Enter word:";
    cin>>word;
    // counter= word.length();

    for(int i=0; word[i]!='\0'; i++)
    {
      count++;
    }
    if(count%2==0)
    {
        cout<<"true";
    }
     if(count%2!=0)
    {
        cout<<"false";
    }

}