#include<iostream>
using namespace std;
string checkTitle(int age, char gender);
main()
{
  int age;
  string title;
  char gender;
  cout<<"Enter your age:";
  cin>>age;
  cout<<"Enter your gender:";
  cin>>gender;
  title=checkTitle( age, gender);
  cout<<"your title is:"<<title;
}
string checkTitle(int age, char gender)
{
    string title;
    if(gender=='m' && age>=16)
    {
      title="Mr";
    }
    else if(gender=='m' && age<16)
    {
        title="Master";
    }
    else if(gender=='f' && age>=16)
    {
        title="Ms";
    }
    else if(gender=='f' && age<16)
    {
        title="Miss";
    }
    return title;
}
