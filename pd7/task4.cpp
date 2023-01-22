#include<iostream>
using namespace std;
void check(int patient, int doctor, int treated, int untreated);

main()
{
    int days,patient,doctor=7,treated=0, untreated=0;
    cout<<"Enter period:";
    cin>>days;

   for(int count=1; count<=days; count++)
   { 
     cout<<"Enter amount of patient:";
     cin>>patient;
     if(count%3==0 && untreated>treated )
     {
        doctor=doctor+1;
     }
     for(int i=1; i<=patient; i++)
     {
      if(i<=doctor)
      {
       treated=treated+1;
      }
      if(i>doctor)
      {
        untreated=untreated+1;
     }
    }
   } cout<<"treated patient:"<<treated<<endl;
   cout<<"untreated patient:"<<untreated<<endl;
}