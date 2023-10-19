#include <stdio.h>
#include <graphica.h>
int main(int argc, char const *argv[])
{
    int gd=DETECT,gm;
    int x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8;
    float shx, shy;

    initgraph(&gd,&gm,"c:\\turboc3\\bgi")
    printf("Entert the value of the the reactanclt paratmeter:");
    scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    printf("Enter the shearing factor shx:");
    scanf("%d", &shx);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x4, y4);
    line(x4, y4, x1, y1);

    x5 = x1 + y1 * shx;
    y5 = y1;
    x6 = x2 + y2 * shx;
    y6 = y2;
    x7 = x3 + y3 * shx;
    y7 = y3;
    x8 = x4 + y4 * shx;
    y8 = y4;

    line(x5, y5, x6, y6);
    line(x6, y6, x7, y7);
    line(x7, y7, x8, y8);
    line(x8, y8, x5, y5);
}
