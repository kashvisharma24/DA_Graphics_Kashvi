#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm,(char*)"");

    int x = 100; // Initial x-coordinate of stickman

    while (x < 250) { // Move stickman towards blackboard
        // Clear previous position of stickman
        cleardevice();

        // Draw the head
        circle(x, 100, 20);

        // Draw the body
        line(x, 120, x, 180);

        // Draw the arms
        line(x, 130, x - 20, 150);
        line(x, 130, x + 20, 150);

        // Draw the legs
        line(x, 180, x - 20, 220);
        line(x, 180, x + 20, 220);

        // Draw the stick
        line(x + 20, 150, x + 50, 150);

        // Draw the blackboard
        rectangle(250, 100, 450, 180);

        // Update the position of the stickman
        x += 5; // Increase x-coordinate by 5 pixels

        // Delay to control animation speed
        delay(50);
    }

    getch();
    closegraph();
    return 0;
}