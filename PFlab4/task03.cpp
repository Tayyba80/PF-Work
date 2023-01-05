#include<iostream>
using namespace std;
void discount(int tpamount,string day);

main() {
  while(true){
 string day;
 int tpamount;

 cout<<"Enter day:";
 cin>>day;

 cout<<"Enter total purchase amount:";
 cin>>tpamount;

 discount(tpamount,day);
}
}
  void discount(int tpamount,string day)
   {
    int less,adamount;
    less=(tpamount*10)/100;
    
    adamount=tpamount-less;
    cout<<""<<endl;

     if(day=="sunday")
       {
       cout<<"total discount is:"<<less<<endl;
       cout<<"Amount after discount is:"<<adamount<<endl;   
       }
    if(day!="sunday")
       {
      cout<<"No discount is available so your total amount is:"<<tpamount<<endl;   
       }
      }