// Draw a rectangle,line,circle 
#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    rectangle(20, 30, 80, 90);
    circle(300, 300, 100);
    line(100, 60, 200, 60);
    getchar();
    return 0;
}
