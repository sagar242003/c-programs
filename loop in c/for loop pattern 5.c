
//pattern Program 5

#include<stdio.h>
main()
{

int i,j;

for(i=1;i<=5;i=i+1)
{
    for(j=1;j<=5;j=j+1)
    {
           if(i==j || i+j==6)
           {
               printf("*");
           }
           else
            {
                printf(" ");
            }
                   }

        printf("\n");
    }
}
