#include <iostream>
#include <string>
using namespace std;
main()
{
    string movie[5] = {"harry potter", "baby boss", "avangers", "free guy", "star wars"};
    string name = "";
    cout << "Enter movie name:";
     getline(cin,name);
     
    int price = 500, price2 = 0,totalPrice=0;

    for (int i = 0; i < 5; i++)
    {
        if (name == movie[i])
        {
            if (i % 2 == 0)
            {
                price2 = (price * 10) / 100;
               totalPrice= price-price2;
            }
            else if(i%2!=0)
            {
                price2 = (price * 5) / 100;
                totalPrice= price-price2;
            }
        }
    }
    cout <<"Price after discount is:"<<totalPrice;
    
}