DDA Line Drawing Algorithm in C++

A C++ program that implements the Digital Differential Analyzer (DDA)
line drawing algorithm using the WinBGIm graphics.h library. The
program accepts two endpoints from the user, calculates the intermediate
points, and plots the line pixel by pixel in a graphics window.

Features

Accepts the starting point (x1, y1) and ending point (x2, y2) as
user input.

Calculates the differences dx and dy.

Determines the number of steps using the larger absolute difference.

Calculates the incremental changes in the x and y directions.

Uses the DDA algorithm to calculate and plot each point.

Displays Cartesian axes and a heading in the graphics window.

Scales the input coordinates by a factor of 2 for display.

Checks that each plotted point is inside the graphics window.

Waits for a key press before closing the window.

Requirements

Windows PC.

MSYS2 with the UCRT64 environment and GCC/G++ installed.

A WinBGIm-compatible graphics.h header and libbgi.a library.

The WinBGIm library must be compatible with the compiler/toolchain
being used.

Note: GCC does not include graphics.h by default. Installing the
MSYS2 GCC package alone is not enough; you must separately install and
configure a compatible WinBGIm library.

Source file

Save the program as dda.cpp (or use your own filename).

How the algorithm works

Read the two endpoints from the user.

Calculate dx = x2 - x1 and dy = y2 - y1.

Calculate the number of steps as the greater of |dx| and |dy|.

If both endpoints are identical, stop because no line needs to be
drawn.

Calculate xIncrement = dx / steps and yIncrement = dy / steps.

Start at (x1, y1).

For each step, round the current coordinates to the nearest integer
and plot the corresponding pixel.

Add the x and y increments and repeat until the endpoint is reached.

Compile

Open MSYS2 UCRT64 and change to the folder containing your source
file. For example:

cd /c/Users/HP/Desktop

Compile the program, adjusting the include and library paths if WinBGIm
is installed elsewhere:

g++ dda.cpp -o dda.exe -I/path/to/winbgim/include -L/path/to/winbgim/lib -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

If the WinBGIm header and library are already in GCC's standard include
and library locations, you may not need the -I and -L options:

g++ dda.cpp -o dda.exe -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

Run

From the same terminal and folder:

./dda.exe

You will be prompted to enter the starting and ending coordinates. For
example:

Enter starting point (x1 y1): 10 20
Enter ending point (x2 y2): 100 80

The program then opens the graphics window and displays the line.

You can also run the executable from Windows Command Prompt after
changing to the folder containing it:

dda.exe

Expected output

A black graphics window titled DDA Line Drawing containing:

A white heading: "DDA Line Drawing Algorithm".

A vertical and horizontal Cartesian axis in dark gray.

A yellow line plotted pixel by pixel between the entered endpoints.

The program maps the input coordinates to screen positions using:

screenX = 400 + round(x * 2)

screenY = 300 - round(y * 2)

This places the origin at the centre of the window, scales coordinates
by 2, and reverses the y direction to match screen coordinates.

Press a key in the graphics window to close it.

Functions and concepts used

max() --- selects the larger of two values.

abs() --- obtains the absolute value.

round() --- rounds a floating-point value to the nearest integer.

initwindow() --- creates the graphics window.

setbkcolor() --- sets the background colour.

cleardevice() --- clears the graphics screen.

setcolor() --- selects the drawing/text colour.

line() --- draws the Cartesian axes.

putpixel() --- plots an individual pixel.

outtextxy() --- displays text at a specified position.

getch() --- waits for a key press.

closegraph() --- closes the graphics window.

Notes

If the two input points are identical, the program prints a message
and exits without opening the graphics window.

Points that map outside the 800 × 600 window are skipped.

Very large input coordinates may place much or all of the line
outside the visible window.

The program uses floating-point increments and rounding to determine
the plotted pixels.