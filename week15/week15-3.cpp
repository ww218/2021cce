#include <stdio.h>///����۰��k///�L�X�L�{
int main()
{
    int a,b;///�Ѥj//�ѤG
    scanf("%d %d",&a,&b);
    int c=a%b;///�ѤT

    printf("�Ѥj:%d �ѤG:%d �ѤT:%d\n ",a,b,c);
    while(1)
    {
        if(c==0)
        {
            printf("�]��c�O0,�Nbreak���}�j��\n");
            break;
        }
        a=b;
        b=c;
        c=a%b;
        printf("�Ѥj:%d �ѤG:%d �ѤT:%d\n ",a,b,c);
    }
    printf("���}�j���,���׬O:%d\n",b);
}

