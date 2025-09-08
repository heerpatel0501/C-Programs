#include <stdio.h>
int main(){

    int h, l, area, perimeter;

    printf("enter the length and height of rectangle in meter:", l, h);
    scanf("%d%d", &l, &h);

    area = l*h;
    perimeter = 2*(l+h);

    printf("\n area of rectangle is %d m", area);
    printf("\n perimeter of rectangle is %d m", perimeter);    
}
