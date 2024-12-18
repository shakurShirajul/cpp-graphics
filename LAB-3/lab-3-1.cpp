// Draw Line using line equation 

#include <iostream> 
#include <graphics.h> 
#include<bits/stdc++.h> 
void drawLine(int x1, int y1, int x2, int y2) { 
int gd = DETECT, gm; 
initgraph(&gd, &gm, ""); 
int dx = x2 - x1; 
int dy = y2 - y1; 
float m = (float)dy / dx; 
float c = y1 - m * x1; 
int x, y; 
for (x = x1; x <= x2; x++) { 
y = m * x + c; 
putpixel(x, round(y), WHITE); 
} 
delay(5000); 
closegraph(); 
} 
int main() { 
int x1, y1, x2, y2; 
std::cout << "Enter the coordinates (x1 y1 x2 y2): "; 
std::cin >> x1 >> y1 >> x2 >> y2; 
drawLine(x1, y1, x2, y2); 
return 0; 
}