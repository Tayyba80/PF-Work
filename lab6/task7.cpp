#include<iostream>
using namespace std;
float checkCost(string city, string product, int quantity);
main()
{
  int quantity;
  string city, product;
  float amount;
  cout<<"Enter city :";
  cin>>city;
   cout<<"Enter product :";
  cin>>product;
   cout<<"Enter amount :";
  cin>>quantity;
  amount=checkCost(city, product,quantity);
  cout<<"Your total amount is:"<<amount;
    
}
float checkCost(string city, string product, int quantity)
{
  float amount;
  if(city=="sofia")
  {
    if(product=="coffee")
    {
        amount=quantity*0.50;      
    }
    if(product=="water")
    {
        amount=quantity*0.80;
    }
    if(product=="beer")
    {
        amount=quantity*1.20;
    }
    if(product=="sweets")
    {
        amount=quantity*1.45;
    }
    if(product=="penuts")
    {
        amount=quantity*1.60;
    }
  }

  if(city=="plovdiv")
  {
    if(product=="coffee")
    {
        amount=quantity*0.40;      
    }
    if(product=="water")
    {
        amount=quantity*0.70;
    }
    if(product=="beer")
    {
        amount=quantity*1.15;
    }
    if(product=="sweets")
    {
        amount=quantity*1.30;
    }
    if(product=="penuts")
    {
        amount=quantity*1.50;
    }
  }

  if(city=="varna")
  {
    if(product=="coffee")
    {
        amount=quantity*0.45;      
    }
    if(product=="water")
    {
        amount=quantity*0.70;
    }
    if(product=="beer")
    {
        amount=quantity*1.10;
    }
    if(product=="sweets")
    {
        amount=quantity*1.35;
    }
    if(product=="penuts")
    {
        amount=quantity*1.55;
    }
  }
   return amount;
}
