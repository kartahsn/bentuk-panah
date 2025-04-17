#include <stdio.h>

void main()
{
        int a, b, c, nl;
        printf("Masukan nilai : "); scanf("%d", &nl);
        for(a=1; a<=nl/2; a++)
        {
                for(b=1; b<=a; b++)
                {
                        printf(" ");
                }
                for(c=1; c<=nl; c++)
                {
                        printf("*");
                }
                printf("\n");
        }
        for(a=1; a<=nl/2; a++)
        {
                for(b=a; b<=nl/2; b++)
                {
                        printf(" ");
                }
                for(c=1; c<=nl; c++)
                {
                        printf("*");
                }
                printf("\n");
        }
}


