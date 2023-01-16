#include<iostream>
#include<cmath>
using namespace std;
float playInYear(string year, float holiday, float weekendHome);
main()
{
  float holiday,weekendHome;
  int absoluteTotalPlay;
  string year;
  cout<<"Enter year (normal, leap):";
  cin>>year;

  cout<<"Enter holiday (not saturday or sunday):";
  cin>>holiday;

  cout<<"Enter weekend in which he goes to home:";
  cin>>weekendHome;
  absoluteTotalPlay=playInYear(year,holiday,weekendHome);
  cout<<"total play is:"<<absoluteTotalPlay;

}
float playInYear(string year, float holiday, float weekendHome)
{   
    float holidayTime,weekendTime,weekendSofia,totalPlay,morePlay,leapTotalPlay;
    int absoluteTotalPlay;
    if(year=="normal")
    {
        holidayTime=holiday*0.666;
        weekendSofia=48-weekendHome;
        weekendTime=weekendSofia*0.75;
        totalPlay=holidayTime+weekendHome+weekendTime;
        absoluteTotalPlay=floor(totalPlay); 
    }
    if(year=="leap")
    {
        holidayTime=holiday*0.666;
        weekendSofia=48-weekendHome;
        weekendTime=weekendSofia*0.75;
        totalPlay=holidayTime+weekendHome+weekendTime;
        morePlay=(totalPlay*15)/100;
        leapTotalPlay=totalPlay+morePlay;
        absoluteTotalPlay=floor(leapTotalPlay); 
    }

    return absoluteTotalPlay;
}