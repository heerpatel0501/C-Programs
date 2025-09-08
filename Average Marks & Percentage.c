#include<stdio.h>
int main()
{
    int sub1, sub2, sub3, sub4, sub5, totalmarks, average;
    float percentage;
    printf("enter marks of 5 subjects:", sub1, sub2, sub3, sub4, sub5);
    scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);

    totalmarks= sub1+sub2+sub3+sub4+sub5;
    average= totalmarks/5;
    percentage= (totalmarks*100)/500;

    printf("\n total marks = %d",totalmarks);
    printf("\n average = %d",average);
    printf("\n percentage = %.2f",percentage);
    return 0;
    
}
