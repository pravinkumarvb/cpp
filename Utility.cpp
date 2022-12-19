#include<iostream>
#include<string>
#include<cctype>
#include "Utility.h"

Utility::Utility()
{
    //ctor
}
bool Utility::ValidateStringWithSpace(string str)
{
    bool isValid=true;
    for(const char c:str)
    {
        if(!isalpha(c) && !isspace(c))
        {
            isValid=false;
            break;
        }
    }
    return isValid;
}
bool Utility::ValidateString(string str)
{
    bool isValid=true;
    for(const char c:str)
    {
        if(!isalpha(c))
        {
            isValid=false;
            break;
        }
    }
    return isValid;
}
bool Utility::ValidateNumbers(string str)
{
    bool isValid=true;
    for(const char c:str)
    {
        if(!isdigit(c))
        {
            isValid=false;
            break;
        }
    }
    return isValid;
}
bool Utility::ValidateMobileNo(string str)
{
    if(ValidateNumbers(str)==false)
    {
        return false;
    }
    else
    {
        bool isValid=true;
        if(str.length()!=10)
        {
            isValid=false;
        }
        return isValid;
    }
}
bool Utility::ValidateDate(int d, int m, int y)
{
 //gregorian dates started in 1582
  if (! (1582<= y )  )//comment these 2 lines out if it bothers you
     return false;
  if (! (1<= m && m<=12) )
     return false;
  if (! (1<= d && d<=31) )
     return false;
  if ( (d==31) && (m==2 || m==4 || m==6 || m==9 || m==11) )
     return false;
  if ( (d==30) && (m==2) )
     return false;
  if ( (m==2) && (d==29) && (y%4!=0) )
     return false;
  if ( (m==2) && (d==29) && (y%400==0) )
     return true;
  if ( (m==2) && (d==29) && (y%100==0) )
     return false;
  if ( (m==2) && (d==29) && (y%4==0)  )
     return true;

  return true;
}
