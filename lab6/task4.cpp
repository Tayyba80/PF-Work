#include<iostream>
using namespace std;
string ckeckSpeed(float speed);
main()
{
    float speed;
    string Speed;
    cout<<"Enter speed:";
    cin>>speed;
    Speed=ckeckSpeed( speed);
    cout<<"Your speed is:"<<Speed;


}
string ckeckSpeed(float speed)
{
    string Speed;
    if(speed<=10)
    {
       Speed="slow";
    }
    else if(speed>10 && speed<=50)
    {
        Speed="Average";
    }
    else if(speed>50 && speed<=150)
    {
        Speed="Fast";
    }
    else if(speed>150 && speed<=1000)
    {
        Speed="UltraFast";
    }
    else if(speed>1000)
    {
        Speed="ExtremelyFast";
    }
    return Speed;
}