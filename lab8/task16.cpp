#include <iostream>
using namespace std;
main()
{
    char alpha[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z','a'};

    string line;
    int size=0;
    cout << "Enter word:";
    getline(cin, line);

    for (int i = 0; line[i] != '\0'; i++)
    {
        for (int x = 0; x<27; x++)
        {
            if (line[i] == alpha[x])
            {
                x=x+1;
                cout<<alpha[x];
            }
        }
    }
}
