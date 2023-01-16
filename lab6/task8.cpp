#include<iostream>
#include<cmath>
using namespace std;
float checkMoney(float budget, float people , string category);
main()
{
  float budget,people;
  string category;
  float amount;
  cout<<"Enter number of people:";
  cin>>people;

  cout<<"Enter budget:";
  cin>>budget;

  cout<<"Enter category:";
  cin>>category;
  amount=checkMoney( budget,people ,category);
  if(amount>0)
  {
    cout<<"Yes you have:"<<amount<<"QR left";
  }
  if(amount<0)
  {
    amount=fabs(amount);
    cout<<"NOT enough money.. You need:"<<amount<<"QR";
  }
  
}
float checkMoney(float budget, float people , string category)
{
  float amount,remaining;
  if(people==1 && people<=4)
  {
    if(category=="normal")
    {
        remaining=budget-((budget*75)/100);
        amount=remaining-(249.99*people);
    }
     if(category=="vip")
    {
        remaining=budget-(budget*75)/100;
        amount=remaining-(499.99*people);
    }
  }
  else if(people>4 && people<10)
  {
    if(category=="normal")
    {
        remaining=budget-((budget*60)/100);
        amount=remaining-(249.99*people);
    }
     if(category=="vip")
    {
        remaining=budget-(budget*60)/100;
        amount=remaining-(499.99*people);
    }
  }
 else if(people>=10 && people<25)
  {
    if(category=="normal")
    {
        remaining=budget-(budget*50)/100;
        amount=remaining-(249.99*people);
    }
    if(category=="vip")
    {
        remaining=budget-(budget*50)/100;
        amount=remaining-(499.99*people);
    }
  }
  else if(people>=25 && people<50)
  {
     if(category=="normal")
    {
        remaining=budget-(budget*40)/100;
        amount=remaining-(249.99*people);
    }
      if(category=="vip")
    {
        remaining=budget-(budget*40)/100;
        amount=remaining-(499.99*people);
    }
  }
  else if(people>49)
  {
    if(category=="normal")
    {
        remaining=budget-(budget*25)/100;
        amount=remaining-(249.99*people);
    }
     if(category=="vip")
    {
        budget=budget-(budget*25)/100;
        amount=budget-(499.99*people);
    }
  }
  return amount;
}
