Basic Graphics Primitives in C++

A simple C++ program that uses the WinBGIm graphics.h library to
open a graphics window and draw four basic graphics primitives: a
straight line, a circle, a rectangle, and a triangle.

Features

Opens an 800 × 600 graphics window.

Displays the heading BASIC GRAPHICS PRIMITIVES.

Draws a yellow straight line.

Draws a green circle.

Draws a cyan rectangle.

Draws a red triangle.

Displays a label below each shape.

Waits for a key press before closing the graphics window.

Requirements

Windows PC.

MSYS2 with the UCRT64 environment and the GCC/G++ compiler.

WinBGIm-compatible graphics.h headers and libbgi.a library.

The WinBGIm library must be built for, and compatible with, the
compiler/toolchain being used.

Note: GCC does not include graphics.h by default. Installing the
MSYS2 GCC package alone is not enough; you must separately install and
configure a compatible WinBGIm library.

Source file

Save the program as graphics.cpp (or use your own filename).

Compile

Open MSYS2 UCRT64 and change to the folder containing your source
file. For example:

cd /c/Users/HP/Desktop

Then compile, adjusting the include and library paths if you installed
WinBGIm somewhere else:

g++ graphics.cpp -o graphics.exe -I/path/to/winbgim/include -L/path/to/winbgim/lib -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

If the WinBGIm header and library are already installed in GCC's
standard include and library locations, the -I and -L options may
not be needed:

g++ graphics.cpp -o graphics.exe -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

Run

From the same terminal and folder:

./graphics.exe

You can also run it from Windows Command Prompt by changing to the
folder containing graphics.exe and entering:

graphics.exe

Troubleshooting

Error                                     What it usually means

graphics.h: No such file or directory   The WinBGIm header is missing or
its include directory has not been
supplied with -I.

cannot find -lbgi                       The WinBGIm library is missing or
its library directory has not been
supplied with -L.

undefined reference errors              A required library may be missing
from the link command, or the
WinBGIm library may be incompatible
with the compiler.

If the compiler reports that getch() is not declared, add
#include <conio.h> to the source file and compile again.

Expected output

A black graphics window titled Basic Graphics Primitives,
containing: - A white heading near the top. - A yellow horizontal line
labelled "Straight Line". - A green circle labelled "Circle". - A cyan
rectangle labelled "Rectangle". - A red triangle labelled "Triangle".

Press a key in the graphics window to close it.

Learning objective

This program demonstrates the use of basic WinBGIm drawing functions in
C++:

initwindow() --- creates the graphics window.

setbkcolor() --- sets the background colour.

cleardevice() --- clears the graphics screen.

setcolor() --- selects the drawing/text colour.

line() --- draws a straight line.

circle() --- draws a circle.

rectangle() --- draws a rectangle.

outtextxy() --- displays text at a specified position.

getch() --- waits for a key press.

closegraph() --- closes the graphics window.