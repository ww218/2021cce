#include <stdio.h>
int mian()
{
    int m;
    scanf("%d",&m);
    int i=1;
    while(i<=m)
    {
        int k=1;
        while(k<=m)
        {
            if(k<=m-i)printf(" ");
            else printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
}
