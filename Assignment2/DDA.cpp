
#include <graphics.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    int dx, dy, steps;

    float x, y;
    float xIncrement, yIncrement;

    char heading[] = "DDA Line Drawing Algorithm";

    // Input coordinates
    cout << "Enter starting point (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter ending point (x2 y2): ";
    cin >> x2 >> y2;

    // Calculate differences
    dx = x2 - x1;
    dy = y2 - y1;

    // Calculate steps
    steps = max(abs(dx), abs(dy));

    if (steps == 0)
    {
        cout << "Both points are the same.";
        return 0;
    }

    // Calculate increments
    xIncrement = (float)dx / steps;
    yIncrement = (float)dy / steps;

    // Initialize graphics window
    initwindow(800, 600, "DDA Line Drawing");

    setbkcolor(BLACK);
    cleardevice();

    // Display heading
    setcolor(WHITE);
    outtextxy(20, 20, heading);

    // Draw Cartesian axes
    setcolor(DARKGRAY);
    line(400, 50, 400, 550);
    line(50, 300, 750, 300);

    // Initialize starting point
    x = x1;
    y = y1;

    // Draw line using DDA algorithm
    setcolor(YELLOW);

    for (int i = 0; i <= steps; i++)
    {
        // Scale coordinates to make line appear bigger
        int screenX = 400 + round(x * 2);
        int screenY = 300 - round(y * 2);

        if (screenX >= 0 && screenX < 800 &&
            screenY >= 0 && screenY < 600)
        {
            putpixel(screenX, screenY, YELLOW);
        }

        x += xIncrement;
        y += yIncrement;
    }

    getch();
    closegraph();

    return 0;
}