#include<iostream>
#include<cmath>
using namespace std;
float positive(float a, float b , float c);
float negative(float a, float b , float c);
main()
{
  float a,b,c,whole;
  cout<<"Enter value of a:";
  cin>>a;
  cout<<"Enter value of b:";
  cin>>b;
  cout<<"Enter value of c:";
  cin>>c;
  
  
  whole=positive( a, b , c);
  cout<<"result:"<<whole<<endl;
  whole=negative( a, b , c);
  cout<<"result:"<<whole<<endl;

}
float positive(float a, float b , float c)
{
  float bee,four,minus,square,upper,two,whole;
  bee=pow(b,2);
  four=4*a*c;
  minus=bee-four;
  square=sqrt(minus);
  upper=-b+square;
  two=2*a;
  whole=upper/two;
  //cout<<"result is:"<<whole<<endl;
  return whole;
}
float negative(float a, float b , float c)
{
  float bee,four,minus,square,upper,two,whole;
  bee=pow(b,2);
  four=4*a*c;
  minus=bee-four;
  square=sqrt(minus);
  upper=-b-square;
  two=2*a;
  whole=upper/two;
  //cout<<"result is:"<< whole<<endl;
  return whole;
}