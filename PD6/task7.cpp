#include<iostream>
#include<cmath>
using namespace std;
void status(int startingHour,int startingMinute,int enteringHour,int enteringMinute);
main()
{
    int startingHour,startingMinute,enteringHour,enteringMinute;

    cout<<"Enter Exam starting hour:";
    cin>>startingHour;

    cout<<"Enter exam staring minutes:";
    cin>>startingMinute;

    cout<<"Enter student's Entering hour in hall:";
    cin>>enteringHour;

    cout<<"Enter student's Entering minute in hall:";
    cin>>enteringMinute;

    status( startingHour,startingMinute,enteringHour,enteringMinute);

}
void status(int startingHour,int startingMinute,int enteringHour,int enteringMinute)
{
   int timeInMinutesS=(startingHour*60)+startingMinute;
   int timeInMinutesE=(enteringHour*60)+enteringMinute;
   int leftOverHours,leftOverMinutes, absoluteLeftHours,absoluteLeftMinutes;

   if(timeInMinutesE>timeInMinutesS)
   {
    cout<<"Late"<<endl;
    leftOverHours=(timeInMinutesS-timeInMinutesE)/60;
    absoluteLeftHours=fabs(leftOverHours);
    leftOverMinutes=(timeInMinutesS-timeInMinutesE)%60;
    absoluteLeftMinutes=fabs(leftOverMinutes);
    cout<<absoluteLeftHours<<":"<<absoluteLeftMinutes<<".. After Exam Start";  
   }
   else if(timeInMinutesS==timeInMinutesE || (timeInMinutesS-timeInMinutesE)<=30)
   {
    cout<<"On Time"<<endl;
    leftOverHours=(timeInMinutesS-timeInMinutesE)/60;
    absoluteLeftHours=fabs(leftOverHours);
    leftOverMinutes=(timeInMinutesS-timeInMinutesE)%60;
    absoluteLeftMinutes=fabs(leftOverMinutes);
    cout<< absoluteLeftHours<<":"<<absoluteLeftMinutes<<".. Before Exam Start";  
   }
   else if((timeInMinutesS-timeInMinutesE)>30)
   {
    cout<<"Early"<<endl;
    leftOverHours=(timeInMinutesS-timeInMinutesE)/60;
    absoluteLeftHours=fabs(leftOverHours);
    leftOverMinutes=(timeInMinutesS-timeInMinutesE)%60;
    absoluteLeftMinutes=fabs(leftOverMinutes);
    cout<< absoluteLeftHours<<":"<<absoluteLeftMinutes<<".. Before Exam Start"; 
   }
}

