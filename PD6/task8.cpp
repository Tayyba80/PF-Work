#include<iostream>
using namespace std;
string pointPlace(int height, int xAxis, int yAxis);
main()
{
    int height,xAxis,yAxis;
    cout<<"Enter height:";
    cin>>height;
    cout<<"Enter value of X:";
    cin>>xAxis;
    cout<<"Enter value of Y:";
    cin>>yAxis;

   string result=pointPlace(height,xAxis,yAxis);
   cout<<result;

}
string pointPlace(int height, int xAxis, int yAxis)
{
    string result;
    if(xAxis<0 && yAxis<0 && height<0)
    {
        return "Outside";
    }
    else if(yAxis==0)
    {
    	return "Border";
	}
   
    else if(yAxis<=height)
    {
        if(xAxis<=3*height)
        {
            if(yAxis==height)
            {
                result="Border";
            }
            else
            {
                result="Inside";
            }
        }
        else
        {
            result= "Outside";
        }
    }
    else if (yAxis<=4*height && yAxis>height)
    {
        if(xAxis>=height && xAxis<=2*height)
        {
            if(xAxis==height || xAxis==2*height || yAxis==4*height)
            {
                result ="Border";
            }
            else
            {
                result="Inside";
            }
        }
        else
        {
            result="Outside";
        }
    }
    else
    {
        result="Outside";
    }
   return result; 
}


