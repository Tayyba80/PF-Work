#include<iostream>
using namespace std;
float discount (int amount, string day,string month);
main()
{
    int amount;
    string day,month;
    float payable;
    cout<<"Enter amount:";
    cin>>amount;

    cout<<"Enter day:";
    cin>>day;

    cout<<"Enter month:";
    cin>>month;
   payable= discount ( amount, day,month);
   cout<<"your amount after discount is:"<<payable;
}
float discount (int amount, string day,string month)
{
  float payable;
  if(day=="sunday" && month=="october" || month=="march" || month=="august")
  {
    payable=amount-(amount*10)/100;
  }
  else if(day=="monday" && month=="november" || month=="december")
  {
    payable=amount-(amount*5)/100;
  }
  else
  {
    return amount;
  }

 
 return payable;
}
