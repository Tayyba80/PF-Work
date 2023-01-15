#include<iostream>
using namespace std;
float residential(char serviceCode,  int minutes);
float premium(char serviceCode ,char TimeCode ,int minutes);
main()
{
    char serviceCode,TimeCode;
    int minutes;

    cout<<"Enter service code.. for Residential press (r/R).. for Premium press (p/P):";
    cin>>serviceCode;

    cout<<"Enter minutes:";
    cin>>minutes;

    float  result= residential(serviceCode,minutes);
    cout<<"Total charges are:"<<result<<"$"<<endl;

    cout<<"Enter service code.. for Residential press (r/R).. for Premium press (p/P):";
    cin>>serviceCode;

    cout<<"Enter minutes:";
    cin>>minutes;

    cout<<"Enter time code.. for Day press (d/D).. for Night press (n/N):";
    cin>>TimeCode;

    float results=premium(serviceCode ,TimeCode ,minutes);
    cout<<"Your charges are:"<<results<<"$"<<endl;

}
float residential(char serviceCode,  int minutes)
{
  float result,totalRupees;
  if(serviceCode=='r' || serviceCode=='R')
  {
    if(minutes<=50)
    {
        result=10;
    }
    else if(minutes>50)
    {
        totalRupees=(minutes-50)*0.20;
        result=10+totalRupees;
    }
  }
  return result;
}
float premium(char serviceCode ,char TimeCode ,int minutes)
{
    float results,totalRupees;
    if(serviceCode=='p' || serviceCode=='P')
  {
    if(TimeCode=='d' || TimeCode=='D')
    {
        if(minutes<=75)
       {
        results=25;
       }
       else if(minutes>75)
       {
        totalRupees=(minutes-75)*0.10;
        results=25+totalRupees;
       }
    }

    if(TimeCode=='n' || TimeCode=='N')
    {
        if(minutes<=100)
       {
        results=25;
       }
       else if(minutes>100)
       {
        totalRupees=(minutes-100)*0.10;
        results=25+totalRupees;
       }
    }

  }
  return results;
}