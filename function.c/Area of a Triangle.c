#include<stdio.h>
double area_of_triangle(double B,double H)
{
    return (0.5*B*H);
}

int main()
{
    double base,height,area;

    printf("Enter the base=\n");
    scanf("%lf",&base);
    printf("Enter the height=\n");
    scanf("%lf",&height);

    area= area_of_triangle(base,height);
    printf("AREA= %lf\n",area);
}
