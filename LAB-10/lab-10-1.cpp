// Cohen-Sutherland algorithm for line clipping
#include <graphics.h>
#include <conio.h>

const int INSIDE = 0; // 0000
const int LEFT = 1;   // 0001
const int RIGHT = 2;  // 0010
const int BOTTOM = 4; // 0100
const int TOP = 8;    // 1000

// Function to compute region code for a point(x, y)
int computeOutCode(double x, double y, int xmin, int ymin, int xmax, int ymax)
{
    int code = INSIDE;
    if (x < xmin) // to the left of rectangle
        code |= LEFT;
    else if (x > xmax) // to the right of rectangle
        code |= RIGHT;
    if (y < ymin) // below the rectangle
        code |= BOTTOM;
    else if (y > ymax) // above the rectangle
        code |= TOP;
    return code;
}

// Implementing Cohen-Sutherland algorithm
void cohenSutherland(double x0, double y0, double x1, double y1,
                     int xmin, int ymin, int xmax, int ymax)
{
    int outcode0 = computeOutCode(x0, y0, xmin, ymin, xmax,
                                  ymax);
    int outcode1 = computeOutCode(x1, y1, xmin, ymin, xmax,
                                  ymax);
    bool accept = false;
    while (true)
    {
        if (!(outcode0 | outcode1))
        {
            // Bitwise OR is 0. Trivially accept and get out of loop
            accept = true;
            break;
        }
        else if (outcode0 & outcode1)
        {
            // Bitwise AND is not 0. Trivially reject and get out of loop
            break;
        }
        else
        {
            // Failed both tests, so calculate the line segment to clip
            // from an outside point to an intersection with clip edge
            double x, y;
            int outcodeOut = outcode0 ? outcode0 : outcode1;

            // Now find the intersection point;
            // use formulas y = y0 + slope * (x - x0), x = x0 + (1 / slope)
            *(y - y0) if (outcodeOut & TOP) // point is above the clip rectangle
            {
                x = x0 + (x1 - x0) * (ymax - y0) / (y1 - y0);
                y = ymax;
            }
            else if (outcodeOut & BOTTOM) // point is below the
                clip rectangle
            {
                x = x0 + (x1 - x0) * (ymin - y0) / (y1 - y0);
                y = ymin;
            }
            else if (outcodeOut & RIGHT) // point is to the right of
                clip rectangle
            {
                y = y0 + (y1 - y0) * (xmax - x0) / (x1 - x0);
                x = xmax;
            }
            else if (outcodeOut & LEFT) // point is to the left of clip
                rectangle
            {
                y = y0 + (y1 - y0) * (xmin - x0) / (x1 - x0);
                x = xmin;
            }

            // Now we move outside point to intersection point to clip
            // and get ready for next pass.
            if (outcodeOut == outcode0)
            {
                x0 = x;
                y0 = y;
                outcode0 = computeOutCode(x0, y0, xmin, ymin, xmax,
                                          ymax);
            }
            else
            {
                x1 = x;
                y1 = y;
                outcode1 = computeOutCode(x1, y1, xmin, ymin, xmax,
                                          ymax);
            }
        }
    }
    if (accept)
    {
        // If accepted, draw the line
        line(x0, y0, x1, y1);
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int xmin = 100, ymin = 100, xmax = 200, ymax = 200;
    rectangle(xmin, ymin, xmax, ymax);

    // Line coordinates
    double lines[][4] = {
        {50, 50, 300, 300},
        {150, 150, 250, 250},
        {50, 150, 300, 150},
        {150, 50, 150, 300}};

    // Draw lines
    for (int i = 0; i < 4; i++)
    {
        cohenSutherland(lines[i][0], lines[i][1], lines[i][2], lines[i][3],
                        xmin, ymin, xmax, ymax);
    }

    getch();
    closegraph();
    return 0;
}