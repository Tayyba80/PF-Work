#include <iostream>
using namespace std;
void calculate(float amount);


main()
{
    float amount;
    cout<<"Enter amount of numbers you want to enter:";
    cin>>amount;
    calculate(amount);
}
void calculate(float amount)
{
   float i=0, j=0,k=0,l=0,m=0;
    for(int count=1; count<=amount; count++)
    {
        float nums;
         cout<<"Enter number:";
         cin>>nums;
        if(nums<200)
        {
            i=i+1;
        }
        else if(nums>=200 && nums<=399)
        {
            j=j+1;
        }
       else if(nums>=400 && nums<=599)
        {
            k=k+1;
        }
        else if(nums>=600 && nums<=799 )
        {
           l=l+1;
        }
        else if(nums>=800)
        {
            m=m+1;
        }
    }
   
    cout<<"p1:"<<(i/amount)*100<<"%"<<endl;
    cout<<"p2:"<<(j/amount)*100<<"%"<<endl;
    cout<<"p3:"<<(k/amount)*100<<"%"<<endl;
    cout<<"p4:"<<(l/amount)*100<<"%"<<endl;
    cout<<"p5:"<<(m/amount)*100<<"%"<<endl;
  }
