#include <stdio.h>///剝皮法//while迴圈//加總個位數sum
int main()
{
    int N=1234567892;
    ///N%10取餘數，就是個位數
    ///N/10除10，前面的數字

    int sum=0;
    while( N>0 )
    {
        printf("%d => %d %d\n",N,N/10,N%10);
        sum += N%10;
        N=N/10;///變小
    }
    printf("%d",sum);
}
