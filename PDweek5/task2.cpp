#include<iostream>
using namespace std;
float taxcalculator(float price, char type);
main()
{
  char type;
  float price,fprice,tax;

  cout<<"Enter vehicle type with only enter first letter in Capital:";
  cin>>type;

  cout<<"Enter price:";
  cin>>price;
  fprice=taxcalculator( price, type);
  cout<<"The  price of vehicle .."<<type<<"..after adding tax of.."<<tax<<"..is:"<<fprice;
}
float taxcalculator(float price, char type)
{
  float tax=0,fprice=0;

   if(type=='M')
    {
      tax=(price*6)/100; 
      fprice=price+tax;
      
      return fprice;
    }
    if(type=='E')
    {
      tax=(price*8)/100;
      fprice=price+tax;
      
       return fprice;
    }
    if(type=='S')
    {
      tax=(price*10)/100;
      fprice=price+tax;
     
       return fprice;
    }
     if(type=='V')
    {
      tax=(price*12)/100;
      fprice=price+tax;
      
       return fprice;
    }
     if(type=='T')
    {
      tax=(price*15)/100;
      fprice=price+tax;
      
       return fprice;
    }
}

