#include <iostream>
#include<windows.h>
#include<mysql.h>
#include<string>

#ifndef SQLHELPER_H
#define SQLHELPER_H


class SQLHelper
{
    public:
        SQLHelper();
        MYSQL* GetConnection();
        bool ExecuteNonQuery(const char *q);
        MYSQL_RES* GetData(const char *q);
        bool CheckData(const char *q);
    protected:

    private:
};

#endif // SQLHELPER_H
