#include<iostream>
using namespace std;
float lowPrice(int kilometer, string time);
main()
{
    int kilometer;
    string time;
    float amount;
    cout<<"Enter kilometer:";
    cin>>kilometer;
    cout<<"Enter travelling time:";
    cin>>time;
    amount=lowPrice(kilometer,time);
    cout<<"Amount is:"<<amount;
}
float lowPrice(int kilometer, string time)
{   
    float amount;
    if(kilometer<20)
     {
        if(time=="day")
        {
          amount=(kilometer*0.79)+0.7;      
        }
        if(time=="night")
        {
          amount=(kilometer*0.90)+0.7;      
        }
      }
      if(kilometer>20 && kilometer<=100)
     {
        if(time=="day" || time=="night")
        {
          amount=kilometer*0.09;      
        }
        
      }
      if(kilometer>100)
     {
        if(time=="day" || time=="night")
        {
          amount=kilometer*0.06;      
        }
        
      }

      return amount;
}
