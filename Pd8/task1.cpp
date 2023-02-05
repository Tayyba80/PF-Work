#include <iostream>
using namespace std;
main()
{
    int quantity,totalbill=0;
    string name;
    string fruit[4]={"peach","apple","guava","watermelon"};
    int  price[4]={60,70,40,30};

    cout<<"Enter the name of fruit:";
    cin>>name;

    cout<<"Enter quantity:";
    cin>>quantity;

    for(int i=0;i<4;i++)
    {
        if(name==fruit[i])
        {
            totalbill=quantity*price[i];
            cout<<totalbill;
        }
    }
}