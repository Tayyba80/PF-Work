#include<iostream>
using namespace std;
void discount(int tpamount,string day);
void ldiscount(int tpamont,string day);
 main() {
 while(true){

 string day;
 int tpamount;

 cout<<"Enter day:";
 cin>>day;

 cout<<"Enter total purchase amount:";
 cin>>tpamount;

 discount(tpamount,day);
 ldiscount(tpamount,day);

}
}
  void discount(int tpamount,string day)
   {
    int less,adamount;
    less=(tpamount*10)/100;
   
    adamount=tpamount-less;
   
      if(day=="sunday")
       {
         cout<<"total after discount is:"<<less<<endl;
         cout<<"amount after 10 percent discount is:"<<adamount << endl;
        } 
    }
     void ldiscount(int tpamount,string day)
   {
    int less,adamount;
    less=(tpamount*5)/100;
  
    adamount=tpamount-less;
   
      if(day=="monday")
       {
         cout<<"total after discount is:"<<less<<endl;
         cout<<"amount after 5 percent discount is:"<<adamount << endl;
        }
     
      if(day=="tuesday")
       { cout<<"total after discount is:"<<less<<endl;
         cout<<"amount after 5 percent discount is:"<<adamount << endl;
        }

      if(day=="wednesday")
       {cout<<"total after discount is:"<<less<<endl;
         cout<<"amount after 5 percent discount is:"<<adamount << endl;
        }

      if(day=="thrusday")
       {cout<<"total after discount is:"<<less<<endl;
         cout<<"amount after 5 percent discount is:"<<adamount << endl;
        }

       if(day=="friday")
       {cout<<"total after discount is:"<<less<<endl;
         cout<<"amount after 5 percent discount is:"<<adamount << endl;
        }

        if(day=="saturday")
       {cout<<"total after discount is:"<<less<<endl;
         cout<<"amount after 5 percent discount is:"<<adamount << endl;
        }
     }
     