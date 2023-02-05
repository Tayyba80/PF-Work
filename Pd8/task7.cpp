#include <iostream>
using namespace std;
main()
{
    int count = 0;
    string array1;
    string array2;

    cout << "Enter array1:";
    cin >> array1;

    cout << "Enter array2:";
    cin >> array2;

    for (int i = 0; array1[i] != '\0'; i++)   // to compare one element of 1st array with every single element of 2nd array
    {
        for (int j = 0; array2[j] != '\0'; j++)
        {
            if (array1[i] == array2[j])
            {
                array2[j]='#';
                count++;
                break;
            }
        }
    }

    cout << count;
}