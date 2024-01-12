#include <stdio.h>
int main()
{
    int length;
    int breadth;
    int area;
    int perimeter;

    printf("Enter The Rectangle of Length:\n");
    scanf("%d", &length);
    printf("Enter The Rectangle of breadth:\n");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("The area of Rectangle:%d\n", area);
    printf("The area of perimeter:%d\n", perimeter);
    return 0;
}