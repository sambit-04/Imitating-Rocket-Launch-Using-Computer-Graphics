#include<stdio.h>
#include<conio.h>
#include <graphics.h>

void main()
{
    int gd = DETECT, gm,i;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    for (i = 0; i < 350; i++)
    {
        // Basement
        line(225, 450, 225, 430);
        line(425, 450, 425, 430);
        line(225, 430, 425, 430);
        line(225, 450, 425, 450);

        line(275, 428 - i, 305, 395 - i);
        line(375, 428 - i, 345, 395 - i);
        line(275, 428 - i, 375, 428 - i);
        line(305, 395 - i, 345, 395 - i);
        setfillstyle(2, 5);
        floodfill(325, 400 - i, 15);

        line(305, 395 - i, 305, 285 - i);
        line(345, 395 - i, 345, 285 - i);
        line(305, 285 - i, 345, 285 - i);
        setfillstyle(6, 5);
        floodfill(320, 300 - i, 15);

        line(305, 285 - i, 325, 250 - i);
        line(345, 285 - i, 325, 250 - i);
        setfillstyle(1, 4);
        floodfill(315, 270 - i, 15);

        line(305, 370 - i, 285, 370 - i);
        line(285, 370 - i, 305, 340 - i);
        setfillstyle(1, 4);
        floodfill(290, 368 - i, 15);

        line(345, 370 - i, 365, 370 - i);
        line(365, 370 - i, 345, 340 - i);
        setfillstyle(1, 4);
        floodfill(350, 368 - i, 15);

        if (i > 10)
        {
            ellipse(300, 428 - i, 180, 360, 15, 18);
            setfillstyle(1, 14);
            floodfill(299, 435 - i, 15);
            ellipse(350, 428-i, 180, 360, 15, 18);
            setfillstyle(1, 14);
            floodfill(351, 435 - i, 15);
        }

        line(380, 430, 380, 250);
        line(400, 430, 400, 250);
        line(380, 250, 400, 250);
        setfillstyle(2, 9);
        floodfill(390, 420, 15);

        delay(5);
        cleardevice();
    }

    closegraph();
}
