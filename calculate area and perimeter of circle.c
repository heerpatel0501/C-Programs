#include<stdio.h>
int main(){

    float r, area, perimeter;
    printf("enter the radius of circle in :", r,"m");
    scanf("%f", &r);
    
    area = 3.14*r*r; 
    perimeter = 2*3.14*r;

    printf("\n area of circle is %.2f m", area);
    printf("\n perimeter of circle is %.2f m", perimeter);

}
