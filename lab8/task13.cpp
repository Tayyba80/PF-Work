#include<iostream>
using namespace std;
main()
{
    string line;
    cout<<"Enter line:";
    getline(cin,line);

    for(int i=0;line[i]!='\0';i++)
    {
       if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u')
        {
            continue;
        }
        else
        {
          cout<<line[i];
        } 
    }
   
}
