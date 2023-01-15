#include<iostream>
using namespace std;
float rupees(string fruit, string day,float amount);
float notWeekend(string fruit, string day,float amount);
string errorFruit (string fruit);
string errorDay(string day);
main()
{
    string fruit,day;
    float amount;

    cout<<"Enter type of fruit:";
    cin>>fruit;

    string results=errorFruit (fruit);
    cout<<results<<endl;

    cout<<"Enter week day:";
    cin>>day;

    string result=errorDay( day);
    cout<<result<<endl;

    if(result== "error" && results== "error")
    {
      return 0;
    }

    cout<<"Enter amount:";
    cin>>amount;

   float price=rupees(fruit,day,amount);
    cout<<"price is:"<<price<<endl;
 
}
float rupees(string fruit, string day,float amount)
{
     float price;
     string result;
    if(day=="sunday" || day=="saturday")
    {
        if(fruit=="banana")
        {
           price=amount*2.70;
        }
        if(fruit=="apple")
        {
           price=amount*1.25;
        }
        if(fruit=="orange")
        {
           price=amount*0.90;
        }
        if(fruit=="grapefruit")
        {
           price=amount*1.60;
        }
        if(fruit=="kiwi")
        {
           price=amount*3.00;
        }
        if(fruit=="pineapple")
        {
           price=amount*5.60;
        }
        if(fruit=="grapes")
        {
           price=amount*4.20;
        }
    }

     if(day=="monday" || day=="tuesday" || day=="wednesday" || day=="thrusday" || day=="friday")
    {
       if(fruit=="banana")
        {
           price=amount*2.50;
        }
        if(fruit=="apple")
        {
           price=amount*1.20;
        }
        if(fruit=="orange")
        {
           price=amount*0.85;
        }
        if(fruit=="grapefruit")
        {
           price=amount*1.45;
        }
        if(fruit=="kiwi")
        {
           price=amount*2.70;
        }
        if(fruit=="pineapple")
        {
           price=amount*5.50;
        }
        if(fruit=="grapes")
        {
           price=amount*3.85;
        }
    } 
    return price;
    
}
string errorFruit (string fruit)
{
   string result;
   if(fruit!="banana" && fruit!="kiwi" && fruit!="grapes" && fruit!="pineapple" && fruit!="grapefruit" && fruit!="orange" && fruit!="apple")
    {
      result= "error";
    }
    return result;
}
string errorDay(string day)
{
   string results;
    if(day!="monday" && day!="tuesday" && day!="wednesday" && day!="thrusday" && day!="friday" && day!="sunday" && day!="saturday")
    {
      results="error";
    }
    return results;
}

