#include<iostream>
#include<cmath>
using namespace std;
float calculateMoney(float age, float machinePrice, float toyPrice);
main()
{
    float age,machinePrice,toyPrice;
    cout<<"Enter age:";
    cin>>age;

    cout<<"Enter price of washing machine:";
    cin>>machinePrice;

    cout<<"Enter price of Toy:";
    cin>>toyPrice;

  float afterMachine=  calculateMoney(age,machinePrice, toyPrice);
  if(afterMachine>0)
    {
        cout<<"yes!";
        cout<<afterMachine<<"$ remaining"<<endl;
    }
    if(afterMachine<0)
    {
        cout<<"no!";
       float absoluteAfterMoney=fabs(afterMachine);
        cout<<absoluteAfterMoney<<"$ needed"<<endl;
    }

}
float calculateMoney(float age, float machinePrice, float toyPrice)
{
    float evenAge=0,oddAge=0,totalMoney=0,evenMoney=0,totalEvenMoney=0,totalOddMoney=0,afterMachine=0;
  for(int tAge=1; tAge<=age; tAge++)
  {
    if(tAge%2!=0)
    {
      oddAge=oddAge+1;
    }
   else if(tAge%2==0)
    {
        evenAge=evenAge+1;
        evenMoney=(evenAge*10)-1;
        totalEvenMoney=totalEvenMoney+evenMoney;
    }
  }
    totalOddMoney=oddAge*toyPrice;
    totalMoney=totalEvenMoney+totalOddMoney;
    afterMachine=totalMoney-machinePrice;
    return afterMachine;
   
}