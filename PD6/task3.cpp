#include<iostream>
using namespace std;
string zodiacSign(int date, string month);
string astroSign(int date, string month);
main()
{
    int date;
    string month;
    cout<<"Enter date of birth:";
    cin>>date;

    cout<<"Enter birth month:";
    cin>>month;

    string result=zodiacSign(date, month);
    cout<<"your Zodiac sign is:"<<result<<endl;

   string results= astroSign( date, month);
   cout<<"your Astrological sign is:"<<results<<endl;

}
 string zodiacSign(int date, string month)
{
    string result;
    if((date>=21 && month=="march") || (date<=19 && month=="april"))
    {
        result="Aries";
    }
   else if((date>=20 && month=="april" || month=="may"))
    {
        result="Taurus";
    }
    else if((date>=21 && month=="may") || (date<=20 && month=="june"))
    {
        result="Gemini";
    }
   else if((date>=21 && month=="june") || (date<=22 && month=="july"))
    {
        result="Cancer";
    }
   else if((date>=23 && month=="july") || (date<=22 && month=="august"))
    {
        result="Leo";
    }
   else if((date>=23 && month=="august") || (date<=22 && month=="september"))
    {
        result="Virgo";
    }
   else if((date>=23 && month=="september") || (date<=22 && month=="october"))
    {
        result="Libra";
    }
   else if((date>=23 && month=="october") || (date<=21 && month=="november"))
    {
        result="Scorpio";
    }
   else if((date>=22 && month=="november") || (date<=21 && month=="december"))
    {
        result="Sagittarius";
    }
   else if((date>=22 && month=="december") || (date<=19 && month=="january"))
    {
        result="Capricorn";
    }
   else if((date>=20 && month=="january") || (date<=18 && month=="february"))
    {
        result="Aquarius";
    }
   else if((date>=19 && month=="february") || (date<=20 && month=="march"))
    {
        result="Pisces";
    }
    return result;
}
string astroSign(int date, string month)
{
   string results;
    if((date>=21 && month=="march") || (date<=19 && month=="april"))
    {
        results="The Ram";
    }
   else if((date>=20 && month=="april" || month=="may"))
    {
        results="The Bull";
    }
    else if((date>=21 && month=="may") || (date<=20 && month=="june"))
    {
        results="The Twins";
    }
   else if((date>=21 && month=="june") || (date<=22 && month=="july"))
    {
        results="The Crab";
    }
   else if((date>=23 && month=="july") || (date<=22 && month=="august"))
    {
        results="The Lion";
    }
   else if((date>=23 && month=="august") || (date<=22 && month=="september"))
    {
        results="The Virgin";
    }
   else if((date>=23 && month=="september") || (date<=22 && month=="october"))
    {
        results="The Scales";
    }
   else if((date>=23 && month=="october") || (date<=21 && month=="november"))
    {
        results="The Scorpion";
    }
   else if((date>=22 && month=="november") || (date<=21 && month=="december"))
    {
        results="The Archer";
    }
   else if((date>=22 && month=="december") || (date<=19 && month=="january"))
    {
        results="The Goat";
    }
   else if((date>=20 && month=="january") || (date<=18 && month=="february"))
    {
        results="The Water Bearer";
    }
   else if((date>=19 && month=="february") || (date<=20 && month=="march"))
    {
        results="The Fishes";
    }
    return results;

}