#include<iostream>
using namespace std;
char word(char letter);

main()
{
  char letter;
  cout<<"Enter letter a:";
  cin>>letter;
  word( letter);
  
}
char word(char letter)
{
  if(letter=='a')
  {
    cout<<"The alphabet is small:";
  }

  if(letter=='A')
  {
    cout<<"The alphabet is cpital:";
  }
}
