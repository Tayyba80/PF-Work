#include<iostream>
using namespace std;
void calculation(int cargo, int tons);
 
main()
{
    int cargo,tons;
    cout<<"Enter amount of cargo:";
    cin>>cargo;
    calculation( cargo,  tons);
}
void calculation(int cargo, int tons)
{
    float amount=0,amount2=0,amount3=0,allCargo=0,average,totalAverage;
    for(int i=1; i<=cargo; i++)
    {
        cout<<"Enter tons:";
        cin>>tons;

        if(tons<=3)
        {
            amount=amount+tons;
        }
         if(tons>3 && tons<=11)
        {
            amount2=amount2+tons;
        }
         if(tons>11)
        {
            amount3=amount3+tons;
        }
    }
    allCargo=amount+amount2+amount3;
    cout<<allCargo<<endl;
    cout<<"Mini bus:"<<(amount/allCargo)*100<<"%"<<endl;
    cout<<"Truck:"<<(amount2/allCargo)*100<<"%"<<endl;
    cout<<"Train:"<<(amount3/allCargo)*100<<"%"<<endl;

    average=(amount*200)+(amount2*175)+(amount3*120);
    totalAverage=average/allCargo;
    cout<<totalAverage;
}