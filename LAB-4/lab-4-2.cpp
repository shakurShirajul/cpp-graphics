#include<bits/stdc++.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    int h = getmaxx() / 2;
    int k = getmaxy() / 2;
    int radius = 100;
    circle(h, k, radius);

    for(int angle = 0; angle < 360; angle++) {
        int h1 = h + radius * cos(angle * M_PI / 180);
        int k1 = k + radius * sin(angle * M_PI / 180);
        putpixel(h1, k1, RED);
        delay(10);
    }
    getch();
    closegraph(20000);
    return 0;
}
