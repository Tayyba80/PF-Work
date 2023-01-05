#include<iostream>
using namespace std;
void reverse(string name);

main()
{
system("cls");
string name;
 cout<<"Enter true or false word:";
 cin>>name;
 reverse(name);

}
void reverse(string name)
{ 
  if(name=="true")
    {
      cout<<"false";
    }

  if(name=="false")
    {
      cout<<"true";
    }
}