#include<stdio.h>
int main()
{
    float  length;
    float  width;
    float  area;
    float  perimeter;
        printf("Enter The Length of Rectangle:\n");
    scanf("%f", &length);
    printf("Enter The Width of Rectangle:\n");
    scanf("%f",&width);
    
    area = length*width;
    perimeter= 2*(length+width);
    printf("The Area of rectancle= %f\n",area);
    printf("The perimeter of Rectangle:=%f\n",perimeter);
    return 0;
}