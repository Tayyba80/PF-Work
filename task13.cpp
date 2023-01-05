#include<iostream>
using namespace std;
void free(int holiday);

main()
{
 int holiday;
 cout<<"Enter holidays:";
 cin>>holiday;
 free(holiday);
}
void free(int holiday)
{
  int wdays,timeplay,timerest;
  wdays=365-holiday;
  timeplay=wdays*63+holiday*127;
  timerest=30000-timeplay;

     if(timeplay>30000)
        {
          cout<<"Tom will run away";
          cout<<"He got only"<<timerest<<"minutes to rest";     
         }
     if(timeplay<30000)
        {
          cout<<"Tom will sleep well"<<endl;
          cout<<"He got.. "<<timerest<<" ..minutes to rest";     
         }
}