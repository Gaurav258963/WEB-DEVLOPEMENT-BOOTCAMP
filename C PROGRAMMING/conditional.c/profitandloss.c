#include <stdio.h>
int main()
{

    int cp;
    printf("Enter The cost Price:\n");
    scanf("%d", &cp);

    int sp;
    printf("Enter the selling Price:\n");
    scanf("%d", &sp);
    
        if (sp > cp)
            printf("Profit\n");
        printf("%d\n", sp - cp);
    
    
        if (sp < cp)
            printf("loss \n");
     
    
    if (sp == cp)
        printf("No profit ,No loss");

    return 0;
}