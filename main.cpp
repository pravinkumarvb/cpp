#include <iostream>
#include<string>
#include<Utility.h>

using namespace std;

int main()
{
    string str;
    cout<<"Enter Full Name:";
    getline(cin,str);
    cout<<"Full Name="<<str;
    Utility u;
    if(u.ValidateStringWithSpace(str))
    {
        cout<<"\nValid";
    }
    else
    {
        cout<<"\nInvalid";
    }
    cout<<"\nEnter Mobile No.:";
    getline(cin,str);
    if(u.ValidateMobileNo(str))
    {
        cout<<"\nValid";
    }
    else
    {
        cout<<"\nInvalid";
    }
    /*
     cout<<"\nEnter Choice:";
    getline(cin,str);
    if(u.ValidateNumbers(str))
        cout<<"valid";
    else
        cout<<"invalid";
    */
     int day,month,year;
    cout<<"Enter Date (DD):";
    cin>>day;
    cout<<"Enter Month (MM):";
    cin>>month;
    cout<<"Enter Year (YYYY):";
    cin>>year;
    if(u.ValidateDate(day,month,year))
    {
        string strDated=to_string(year) +"-"+ to_string(month) +"-"+ to_string(day);
        cout<<strDated;
    }
    else
    {
        cout<<"Invalid Date";
    }
    return 0;
}
