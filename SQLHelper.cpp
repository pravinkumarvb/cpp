#include <iostream>
#include<windows.h>
#include<mysql.h>
#include<string>
#include<conio.h>
#include "SQLHelper.h"
using namespace std;
SQLHelper::SQLHelper()
{
    //ctor
}
MYSQL* SQLHelper::GetConnection()
{
 //returns connection pointer
    MYSQL* conn;
    conn=mysql_init(0);
    conn=mysql_real_connect(conn,"localhost","root","","bankdb",0,NULL,0);
    return conn;
}
bool SQLHelper::ExecuteNonQuery(const char *q)
{
    //to execute insert/update/delete query
    MYSQL* conn=GetConnection();
    int qstate;
    qstate=mysql_query(conn,q);
    if(!qstate)
    {
        //success
        return true;
    }
    else
    {
        //error
        return false;
    }
}
MYSQL_RES* SQLHelper::GetData(const char *q)
{
//returns record set
    MYSQL* conn=GetConnection();
    int qstate;
    qstate=mysql_query(conn,q);
    if(!qstate)
    {
        MYSQL_RES* res=mysql_store_result(conn);
        return res;
    }
    else
    {
        cout<<"\nQuery Error:"<<mysql_error(conn)<<endl;
    }
}
bool SQLHelper::CheckData(const char *q)
{
    //true: record found
    //false: record not found
    MYSQL* conn=GetConnection();
    int qstate;
    qstate=mysql_query(conn,q);
    bool found=false;
    if(!qstate)
    {
        MYSQL_RES* res=mysql_store_result(conn);
        MYSQL_ROW row;
        while(row=mysql_fetch_row(res))
        {
            found=true;
            break;
        }
    }
    else
    {
        cout<<"\nQuery Error:"<<mysql_error(conn)<<endl;
    }
    return found;
}
