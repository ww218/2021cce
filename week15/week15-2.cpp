#include <stdio.h>///����۰��k
int main()
{
    int a,b;///�Ѥj//�ѤG
    scanf("%d %d",&a,&b);

    int c=a%b;///�ѤT
    while(1)///�@�������j��
    {
        if(c==0) break;
        a=b;
        b=c;
        c=a%b;
    }
    printf("%d",b);
}
