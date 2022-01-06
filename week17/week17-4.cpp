#include <stdio.h>///剝皮法//while迴圈//加總個位數sum//函式
int f(int N)
{
    int sum=0;///3.加總
    while(N>0)///2.迴圈
    {
        sum += N%10;///1.剝皮3.加總
        N = N/10;///2.N變小
    }
    return sum;///3.加總
}
int main()
{
    int N;
    while(scanf("%d", &N)==1)///6.迴圈一直讀
    {
        if(N==0)break;///5.遇0結束
        int ans=f(f(f(N)));///4.函式
        printf("%d\n",ans);
    }
}
