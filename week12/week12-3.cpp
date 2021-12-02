#include <stdio.h>///廻文
int a[8]={2,0,2,1,1,2,0,2};
int main()
{
    for(int i=0;i<8;i++)
    {
        if(a[i]==a[7-i])
        {
            printf("%d %d相同\n",a[i],a[7-i]);
        }
    }
}
