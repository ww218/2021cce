#include <stdio.h>///��֪k
int main()
{
    int N=1234567892;
    ///N%10���l�ơA�N�O�Ӧ��
    ///N/10��10�A�e�����Ʀr
    printf("%d => %d %d\n",N,N/10,N%10);
    N=N/10;///�ܤp
    printf("%d => %d %d\n",N,N/10,N%10);
    N=N/10;///�ܤp
    printf("%d => %d %d\n",N,N/10,N%10);
    N=N/10;///�ܤp
    printf("%d => %d %d\n",N,N/10,N%10);
    N=N/10;///�ܤp
    printf("%d => %d %d\n",N,N/10,N%10);

}
