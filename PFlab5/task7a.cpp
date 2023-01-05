#include<iostream>
using namespace std;

main()
{
  float volume,pipe1,pipe2,tfr;
  float percentagepool,hour;
  int cpipe1,cpipe2,overflow;
  cout<<"Enter the volume of pool:";
  cin>>volume;
  
  cout<<"Enter the flowrate of pipe1:";
  cin>>pipe1;
  
  cout<<"Enter the flowrate of pipe1:";
  cin>>pipe2;
  
  cout<<"Enter hours:";
  cin>>hour;
  
  
  
  tfr=(pipe1*hour)+(pipe2*hour);
  overflow=tfr-volume;  
  percentagepool=(tfr/volume)*100;
  cpipe1=((pipe1*hour)/tfr)*100;
  cpipe2=((pipe2*hour)/tfr)*100;
  
  if(volume>tfr)
  {
   cout<<"The pool is.."<<percentagepool<<"% full"<<endl;
  
   cout<<"Pipe 1 contribution is.."<<cpipe1<<"%"<<endl;
  
   cout<<"Pipe 2 contribution is.."<<cpipe2<<"%"<<endl;
  }
  
    if(volume<tfr)
  {
	 cout<<"Over flow is:"<<overflow;
  }
}
