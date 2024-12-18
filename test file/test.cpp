#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(YELLOW);
settextstyle(DEFAULT_FONT, HORIZ_DIR, 5);
outtextxy(100,100,"Hello world");
getchar();
return 0;
}
