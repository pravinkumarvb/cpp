#include<iostream>
#include<windows.h>
#include "ScreenPosition.h"

ScreenPosition::ScreenPosition()
{
    //ctor
}
void ScreenPosition::GotoXY(int x,int y)
{
    COORD cood={0,0};//global variable
    cood.X=x;
    cood.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cood);
}
