#include <stdio.h>///��֪k//while�j��//�[�`�Ӧ��sum//�禡
int f(int N)
{
    int sum=0;///3.�[�`
    while(N>0)///2.�j��
    {
        sum += N%10;///1.���3.�[�`
        N = N/10;///2.N�ܤp
    }
    return sum;///3.�[�`
}
int main()
{
    int N;
    while(scanf("%d", &N)==1)///6.�j��@��Ū
    {
        if(N==0)break;///5.�J0����
        int ans=f(f(f(N)));///4.�禡
        printf("%d\n",ans);
    }
}
