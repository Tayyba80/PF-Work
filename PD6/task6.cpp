#include<iostream>
using namespace std;
float Appartment(string month,int stay);
float Studio(string month,int stay);
main()
{
  string month;
  int stay;

  cout<<"Enter month only may,june,july,august.september,october:";
  cin>>month;

  cout<<"Enter number staying days: ";
  cin>>stay;

  float price=Studio(month,stay);
  cout<<"Studio:"<<price<<endl;

  float prices=Appartment(month,stay);
  cout<<"Appartment:"<<prices;

}
float Studio(string month,int stay)
{   
    float price,amount,discount;
    if(month=="may" || month=="october")
    {
        if(stay<=7)
        {
            price=stay*50;
        }
        else if(stay>7 && stay<=14)
        {
            amount=stay*50;
            discount=(amount*5)/100;
            price=amount-discount;
        }
        else if(stay>14)
        {
            amount=stay*50;
            discount=(amount*30)/100;
            price=amount-discount;
        }
    }

    if(month=="june" || month=="september")
    {
        if(stay<=14)
        {
            price=stay*75.20;
        }
         else if(stay>14)
        {
            amount=stay*75.20;
            discount=(amount*20)/100;
            price=amount-discount;
        }
    }

    if(month=="july" || month=="august")
    {
       price=stay*76;
    }
    return price;
}

float Appartment(string month,int stay)
{
    float prices,amount,discount;
    if(month=="may" || month=="october" )
    {
        if(stay<=14)
        {
            prices=stay*65;
        }
         else if(stay>14)
        {
            amount=stay*65;
            discount=(amount*10)/100;
            prices=amount-discount;
        }
    }
    if(month=="june" || month=="september")
    {
        if(stay<=14)
        {
            prices=stay*68.70;
        }
         else if(stay>14)
        {
            amount=stay*68.70;
            discount=(amount*10)/100;
            prices=amount-discount;
        }
    }
    if(month=="july" || month=="august")
    {
        if(stay<=14)
        {
            prices=stay*77;
        }
         else if(stay>14)
        {
            amount=stay*77;
            discount=(amount*10)/100;
            prices=amount-discount;
        }
    }
    return prices;
}
