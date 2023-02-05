#include<iostream>
using namespace std;
main()
{
    string word;
    char letter;
    cout<<"Enter word:";
    getline(cin,word);

    cout<<"Enter letter you want to know:";
    cin>>letter;
    int counter=word.length();
    if(word[counter-1]==letter)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }

}