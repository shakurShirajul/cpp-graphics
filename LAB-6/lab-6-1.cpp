// Flood-fill Algorithm
#include <graphics.h>
#include <stdio.h>
voidflood(intx, inty, intnew_col, intold_col)
{
    if (getpixel(x, y) == old_col)
    {
        putpixel(x, y, new_col);
        flood(x + 1, y, new_col, old_col);
        flood(x - 1, y, new_col, old_col);
        flood(x, y + 1, new_col, old_col);
        flood(x, y - 1, new_col, old_col);
    }
}
intmain()
{
    intgd, gm = DETECT;
    initgraph(&gd, &gm, "");
    // Coordinatesofthetrapezium
    inttop_left_x = 100, top_right_x = 300;
    inttop_y = 100, bottom_y = 200;
    intbottom_left_x = 50, bottom_right_x = 350;
    // Drawtrapezium
    line(top_left_x, top_y, top_right_x, top_y);
    line(top_left_x, top_y, bottom_left_x, bottom_y);
    line(top_right_x, top_y, bottom_right_x, bottom_y);
    line(bottom_left_x, bottom_y, bottom_right_x, bottom_y);
    // Fillingstartcoordinate
    intx = 150;
    inty = 150;
    // Newcolortofill
    intnewcolor = 10;
    // Oldcolorwhichyouwanttofill
    intoldcolor = 0;
    // Callforfilltrapezium
    flood(x, y, newcolor, oldcolor);
    getch();
    closegraph();
    return0;
}