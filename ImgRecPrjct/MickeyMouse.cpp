#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
void main()
{
 int gd = DETECT, gm, i, x;
 clrscr();
 initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
 setcolor(15);
 setfillstyle(1, 15);
 rectangle(20, 30, (getmaxx() - 20), (getmaxy() - 20));
 floodfill(200, 200, 15);
 // ears
 setcolor(0);
 setfillstyle(1, 0);
 circle(175, 130, 80);
 floodfill(175, 130, 0);
 delay(10);
 setcolor(0);
 setfillstyle(1, 0);
 circle(425, 130, 70);
 floodfill(425, 130, 0);
 delay(10);
 setcolor(0);
 setfillstyle(1, 0);
 circle(300, 275, 145);
 floodfill(300, 275, 0);
 delay(10);
 // face
 setcolor(6);
 setfillstyle(1, 6);
 sector(270, 310, 62, 180, 65, 140);
 sector(330, 310, 0, 117, 65, 140);
 ellipse(335, 360, -80, 70, 110, 65);
 fillellipse(335, 360, 110, 65);
Vansh Dahiya 35514002020 P a g e | 31
 ellipse(265, 360, 110, 260, 110, 65);
 fillellipse(265, 360, 110, 65);
 ellipse(300, 398, 190, 350, 70, 50);
 fillellipse(300, 398, 70, 50);
 delay(10);
 // Left out part of the face
 setcolor(6);
 setfillstyle(1, 6);
 rectangle(240, 190, 360, 400);
 floodfill(300, 295, 6);
 delay(10);
 // eyes
 setcolor(15);
 setfillstyle(1, 15);
 sector(270, 310, 0, 180, 20, 80);
 floodfill(270, 310, 15);
 delay(10);
 setcolor(15);
 setfillstyle(1, 15);
 sector(330, 310, 0, 180, 20, 80);
 floodfill(330, 310, 15);
 delay(10);
 setcolor(0);
 setfillstyle(1, 0);
 sector(270, 310, 0, 180, 10, 35);
 floodfill(270, 310, 0);
 sector(330, 310, 0, 180, 10, 35);
 floodfill(330, 310, 0);
 // lips
 setcolor(0);
 setfillstyle(1, 0);
 sector(300, 398, 180, 360, 20, 20);
 floodfill(300, 398, 0);
 delay(10);
 setcolor(RED);
 setfillstyle(1, RED);
 sector(300, 407, -200, 360, 16, 10);
 floodfill(300, 407, RED);
 delay(10);
 // nose
 setcolor(0);
Vansh Dahiya 35514002020 P a g e | 32
 setfillstyle(1, 0);
 ellipse(300, 335, 0, 360, 35, 25);
 floodfill(300, 345, 0);
 delay(10);
 // Smile and nose lines
 setcolor(0);
 ellipse(300, 350, 60, 120, 150, 40);
 arc(300, 275, 230, 310, 124);
 arc(365, 380, 0, 70, 20);
 arc(235, 375, 110, 180, 20);
 delay(10);
 getch();
 closegraph();
}