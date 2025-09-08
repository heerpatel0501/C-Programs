#include<stdio.h> 
int main() 
{
    float q1,q2,q3, p1, p2, p3, subtotal, total, gst; 

    printf ("item1:\n");
    scanf("%.2f%d", &q1, &p1);

    printf("item2:\n");
    scanf("%.2f%d", &p2, &q2);
    printf("item3:\n");
    scanf("%.2f%d", &p3, &q3);
    
    subtotal= (p1*q1)+(p2*q2)+(q3*p3);
    gst= 0.18f*subtotal;
    total= subtotal + gst; 

    printf("item1= %.2f x %d ", p1, q1);
    printf("\nitem2= %.2f x %d", p2, q2);
    printf("\nitem3=%.2f x %d", p3, q3);
    printf("\nsubtotal= %.2f", subtotal);
    printf("\ngst= %.2f", gst);
    printf("\ntotal=%.2f", total);

}
