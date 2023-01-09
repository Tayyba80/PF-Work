#include<iostream>

using namespace std;
float Pvolume(float volume,string unit);
main()
{
  float length,width,height,volume,cubicvolume;
  string unit;

  cout<<"Enter length:";
  cin>>length;

  cout<<"Enter height:";
  cin>>height;

  cout<<"Enter width:";
  cin>>width;

  cout<<"Enter unit:";
  cin>>unit;

  volume=(length*width*height)/3;
  cout<<"ans"<<volume;
  cubicvolume=Pvolume(volume,unit);
  cout<<"Cubic volume of pyramid is:"<<cubicvolume;

}

  float Pvolume(float volume,string unit)
  {
     float cubicvolume;
     if(unit=="centimeter")
     {
        cubicvolume=(volume*1000000);
        return cubicvolume;
     }
     if(unit=="kilometer")
     {
       cubicvolume=(volume/1000000000);
       return cubicvolume;
     }
     if(unit=="milimeter")
     {
       cubicvolume=(volume*1000000000);
       return cubicvolume;
     }
  }
  


