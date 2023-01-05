#include<iostream>
using namespace std;
void flower(int red,int white,int tulip);

main()
{
  while(true)
 {
  int red,white,tulip;
  cout<<"Enter the price of white flower:";
  cin>>white;

  cout<<"Enter the price of red flower:";
  cin>>red;

  cout<<"Enter the price of tulip flower:";
  cin>>tulip;

  flower(red,white,tulip);
 }
}

void flower(int red,int white,int tulip)
{ 
  int tprice,discount,adiscount;
    tprice=red+white+tulip;

     if(tprice<200)
        {
          cout<<"You got no discount:"<<tprice<<endl;
        }
       
     if(tprice>200)
        {
          discount=(tprice*20)/100;
          adiscount=tprice-discount;
          cout<<"Your price after discount is:"<<adiscount<<endl;
        }
}