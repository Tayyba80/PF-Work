#include<iostream>
#include<cmath>
using namespace std;
float calculatePrice(float inheritance, float year);
main()
{
    float inheritance,year;
    cout<<"Enter inheritance money:";
    cin>>inheritance;

    cout<<"Enter the year he want to until he has to live in the past:";
    cin>>year;

     float remaining=calculatePrice( inheritance,year);
     if(remaining>0)
     {
        cout<<"yes"<<endl;
        cout<<remaining<<"$ remaining"<<endl;
     }
     if(remaining<0)
     {
        cout<<"no"<<endl;
        float tremaining=fabs(remaining);
        cout<<tremaining<<"$ he needed"<<endl;
     }
     

}
float calculatePrice(float inheritance, float year)
{
    int age=17;
    float evenYear=0,evenTotal=0,oddTotal=0,overallTotal=0,remaining=0,total=0;
    for(int time=1800; time<=year; time++ )
    {   age=age+1;
        if(time%2==0)
        {
            evenYear=evenYear+1;
        }
         if(time%2!=0)
        {
            oddTotal=(12000+50*age);
            total=total+oddTotal;
        }
    }
    evenTotal=evenYear*12000;

    overallTotal=evenTotal+total;

    remaining=inheritance-overallTotal;

    return remaining;

}