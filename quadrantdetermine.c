/* * C program to determine the quadrant* in a XY coordinate system using its coordinate point */
#include <stdio.h>
int main() 
{ 
    int x, y;
printf("Enter the values for X and Y");
scanf("%d %d", &x, &y); 
if (x > 0 && y > 0)
printf("point (%d, %d) lies in the First quadrant",x,y);
else if (x < 0 && y > 0) 
printf("point (%d, %d) lies in the Second quadrant",x,y);
else if (x < 0 && y < 0) 
printf("point (%d, %d) lies in the Third quadrant",x,y);
else if (x > 0 && y < 0) 
printf("point (%d, %d) lies in the Fourth quadrant",x,y);
else if (x == 0 && y == 0) 
printf("point (%d, %d) lies at the origin",x,y); 
    return 0;
}
