#include <iostream>
using namespace std;
int intpin[4];
string convert(string pin);

main()
{
  int pinlength, actualpin;
  string move[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Head Spin", "Dosado", "Pop", "Lock", "Arabesque"};
  string pin;
  cout << "Enter pin:";
  cin >> pin;
  pinlength = pin.length();
  if (pinlength == 4)
  {
    for (int i = 0; i < 4; i++)
    {
      if (pin[i] != '0' && pin[i] != '1' && pin[i] != '2' && pin[i] != '3' && pin[i] != '4' && pin[i] != '5' && pin[i] != '6' && pin[i] != '7' && pin[i] != '8' && pin[i] != '9')
      {
        cout << "Invalid Input";
        return 0;
      }
    }
  }
  else
  {
    cout << "Invalid Input";
    return 0;
  }
  convert(pin);
  for (int k = 0; k < 4; k++)
  {
    actualpin = intpin[k] + k;
    if (actualpin > 9)
    {
      actualpin = actualpin - 10;
      cout << move[actualpin] << ",";
    }
    else if (actualpin <= 9)
    {
      cout << move[actualpin] << ",";
    }
  }
}
string convert(string pin)
{

  for (int k = 0; k < 4; k++)
  {
    if (pin[k] == '0')
    {
      intpin[k] = 0;
    }
    else if (pin[k] == '1')
    {
      intpin[k] = 1;
    }
    else if (pin[k] == '2')
    {
      intpin[k] = 2;
    }
    else if (pin[k] == '3')
    {
      intpin[k] = 3;
    }
    else if (pin[k] == '4')
    {
      intpin[k] = 4;
    }
    else if (pin[k] == '5')
    {
      intpin[k] = 5;
    }
    else if (pin[k] == '6')
    {
      intpin[k] = 6;
    }
    else if (pin[k] == '7')
    {
      intpin[k] = 7;
    }
    else if (pin[k] == '8')
    {
      intpin[k] = 8;
    }
    else if (pin[k] == '9')
    {
      intpin[k] = 9;
    }
  }
}