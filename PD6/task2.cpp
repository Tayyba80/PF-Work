#include<iostream>
using namespace std;
string grade(float marks1,float marks2,float marks3,float marks4,float marks5);
float percentage(float marks1,float marks2,float marks3,float marks4,float marks5);
float totalMarks(float marks1,float marks2,float marks3,float marks4,float marks5);
string personName(string name);
main()
{
    string subject1,subject2,subject3,subject4,subject5,name;
    float marks1,marks2,marks3,marks4,marks5;

    cout<<"Enter name:";
    cin>>name;

    cout<<"Enter subject 1:";
    cin>>subject1;
    cout<<"Enter marks:";
    cin>>marks1;

    cout<<"Enter subject 2:";
    cin>>subject2;
    cout<<"Enter marks:";
    cin>>marks2;

    cout<<"Enter subject 3:";
    cin>>subject3;
    cout<<"Enter marks:";
    cin>>marks3;

    cout<<"Enter subject 4:";
    cin>>subject4;
    cout<<"Enter marks:";
    cin>>marks4;

    cout<<"Enter subject 5:";
    cin>>subject5;
    cout<<"Enter marks:";
    cin>>marks5;

    name=personName(name);
    cout<<name<<endl;

    float obtainMarks=totalMarks(marks1,marks2,marks3,marks4, marks5);
    cout<<"Obtain marks are:"<<obtainMarks<<endl;

    float percent=percentage(marks1,marks2, marks3,marks4,marks5);
    cout<<"Percentage is:"<<percent<<endl;

    string result=grade(marks1,marks2,marks3,marks4,marks5);
    cout<<"Your grade is:"<<result<<endl;
}
 string personName(string name)
 {
    return name;
 }

 float totalMarks(float marks1,float marks2,float marks3,float marks4,float marks5)
 {
   float obtainMarks=marks1+marks2+marks3+marks4+marks5;
   return obtainMarks;
 }

 float percentage(float marks1,float marks2,float marks3,float marks4,float marks5)
 {
    float obtainMarks=marks1+marks2+marks3+marks4+marks5;
    float percent=(obtainMarks/500)*100;
    return percent;
 }

 string grade(float marks1,float marks2,float marks3,float marks4,float marks5)
 {
    float obtainMarks=marks1+marks2+marks3+marks4+marks5;
    float percent=(obtainMarks/500)*100;
    string result;

    if(percent>89 && percent<=100)
    {
        result ="A+";
    }
    else if(percent>79 && percent<=90)
    {
        result ="A";
    }
    else if(percent>69 && percent<=80)
    {
        result ="B+";
    }

    else if(percent>59 && percent<=70)
    {
        result ="B";
    }
    else if(percent>49 && percent<=60)
    {
        result ="C";
    }

    else if(percent>39 && percent<=50)
    {
        result ="D";
    }

    else if(percent<40)
    {
        result ="F";
    }
    return result;
 }