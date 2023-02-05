#include<iostream>
using namespace std;
main()
{
    bool isPresent=false;
    string word;
    char letter;
    cout<<"Enter a word:";
    getline(cin,word);
    
    cout<<"Enter letter you want to know:";
    cin>>letter;

    for(int i=0;word[i]!='\0';i++)
    {
      if(word[i]==letter)
      {
        isPresent=true;
      }
    }
    if(isPresent==true)
    {
        cout<<"Present";
    }
    else
    {
      cout<<"Not present";
    }
}


