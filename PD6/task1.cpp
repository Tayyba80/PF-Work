#include<iostream>
using namespace std;
string activity(string temperature, string humidity);
main()
{
  string temperature,humidity,result;
  cout<<"Enter temperature:";
  cin>>temperature;

  cout<<"Enter humidity:";
  cin>>humidity;

  result=activity(temperature, humidity);
  cout<<"The result is:"<<result;
}
string activity(string temperature, string humidity)
{   
    string result;
    if(temperature=="warm")
    {
        if(humidity=="dry")
        {
        result="Play Tennis";
        }
     
        if(humidity=="humid")
        {
            result="Swim";
        }
    }

    if(temperature=="cold")
    {
        if(humidity=="dry")
        {
        result="Play Basketball";
        }
     
        if(humidity=="humid")
        {
            result="Watch TV";
        }
    }
    return result;
}

   


