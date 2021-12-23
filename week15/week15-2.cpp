#include <stdio.h>///輾轉相除法
int main()
{
    int a,b;///老大//老二
    scanf("%d %d",&a,&b);

    int c=a%b;///老三
    while(1)///一直做的迴圈
    {
        if(c==0) break;
        a=b;
        b=c;
        c=a%b;
    }
    printf("%d",b);
}
