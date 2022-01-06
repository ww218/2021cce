#include <stdio.h>///ブ猭//while癹伴//羆计sum
int main()
{
    int N=1234567892;
    ///N%10緇计碞琌计
    ///N/10埃10玡计

    int sum=0;
    while( N>0 )
    {
        printf("%d => %d %d\n",N,N/10,N%10);
        sum += N%10;
        N=N/10;///跑
    }
    printf("%d",sum);
}
