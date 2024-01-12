#include<stdio.h>
int main()
{
   int x;

   printf("Enter The Percentage:\n");
   scanf("%d",&x);

   if(x>=81) printf("Very good");
   else{
    if(x>=61) printf("Good");
    else{ 
        if(x>=41) printf("Average");
        else{
            if(x>=0) printf("Fail");
            else{
                return 0;
            }
        }
    }
   }
}