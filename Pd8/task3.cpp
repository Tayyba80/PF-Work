#include <iostream>
using namespace std;
main()
{
   bool isPresent = false;
   int size;
   cout << "Enter size of array:";
   cin >> size;
   int number[size];
   int number2[size];

   for (int i = 0; i < size; i++)
   {
      cout << "Enter numbers:";
      cin >> number[i];

      while(number[i]!=0)
      {
         number2[i] = number[i] % 10;

         if (number2[i] == 7)
         {
            isPresent = true;
         }
       number[i]= number[i]/10;
      }
   }
      if (isPresent = true)
      {
         cout << "Boom";
      }
      else if (isPresent = false)
      {
         cout << "There is no 7 in the array";
      }
   }