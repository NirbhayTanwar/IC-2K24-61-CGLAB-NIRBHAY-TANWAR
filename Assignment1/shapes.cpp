
#include <graphics.h>
#include <iostream>
using namespace std;

int main()
{
    // Text labels
    char heading[] = "BASIC GRAPHICS PRIMITIVES";
    char label1[] = "Straight Line";
    char label2[] = "Circle";
    char label3[] = "Rectangle";
    char label4[] = "Triangle";

    // Initialize graphics window
    initwindow(800, 600, "Basic Graphics Primitives");

    // Set background color
    setbkcolor(BLACK);
    cleardevice();

    // Heading
    setcolor(WHITE);
    outtextxy(280, 30, heading);

    // 1. Draw a straight line
    setcolor(YELLOW);
    line(100, 150, 300, 150);
    outtextxy(160, 170, label1);

    // 2. Draw a circle
    setcolor(GREEN);
    circle(550, 150, 60);
    outtextxy(525, 225, label2);

    // 3. Draw a rectangle
    setcolor(CYAN);
    rectangle(100, 320, 300, 440);
    outtextxy(165, 455, label3);

    // 4. Draw a triangle
    setcolor(RED);
    line(400, 440, 500, 290);
    line(500, 290, 600, 440);
    line(600, 440, 400, 440);
    outtextxy(465, 455, label4);

    // Wait for key press
    getch();

    // Close graphics window
    closegraph();

    return 0;
}