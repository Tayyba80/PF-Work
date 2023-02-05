#include <iostream>
using namespace std;
main()
{
    string letter[4];
    for (int i = 0; i<4; i++)
    {
        cout << "Enter word:";
        cin >> letter[i];
    }
        if (letter[0] == letter[1] && letter[1] == letter[2] && letter[2] == letter[3] )
        {
           cout<< "true";
        }
        else
        {
            cout<<"False";
        }
}