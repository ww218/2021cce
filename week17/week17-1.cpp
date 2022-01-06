#include <stdio.h>///剝皮法
int main()
{
    int N=1234567892;
    ///N%10取餘數，就是個位數
    ///N/10除10，前面的數字
    printf("%d => %d %d\n",N,N/10,N%10);
    N=N/10;///變小
    printf("%d => %d %d\n",N,N/10,N%10);
    N=N/10;///變小
    printf("%d => %d %d\n",N,N/10,N%10);
    N=N/10;///變小
    printf("%d => %d %d\n",N,N/10,N%10);
    N=N/10;///變小
    printf("%d => %d %d\n",N,N/10,N%10);

}
