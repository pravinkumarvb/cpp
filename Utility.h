#include<iostream>
#include<string>
#ifndef UTILITY_H
#define UTILITY_H

using namespace std;
class Utility
{
    public:
        Utility();
        bool ValidateStringWithSpace(string str);
        bool ValidateString(string str);
        bool ValidateNumbers(string str);
        bool ValidateMobileNo(string str);
        bool ValidateDate(int d, int m, int y);
    protected:

    private:
};

#endif // UTILITY_H
