#include <graphics.h>
#include<conio.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm,(char*)"");

    // Draw the head
    circle(100, 100, 20);

    // Draw the body
    line(100, 120, 100, 180);

    // Draw the arms
    line(100, 130, 80, 150);
    line(100, 130, 120, 150);

    // Draw the legs
    line(100, 180, 80, 220);
    line(100, 180, 120, 220);

    // Draw the stick
    line(120, 150, 150, 150);

    // Draw the blackboard
    rectangle(250, 100, 450, 280);

    getch();
    closegraph();
    return 0;
}