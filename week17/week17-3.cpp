#include <stdio.h>///��֪k//while�j��//�[�`�Ӧ��sum
int main()
{
    int N=1234567892;
    ///N%10���l�ơA�N�O�Ӧ��
    ///N/10��10�A�e�����Ʀr

    int sum=0;
    while( N>0 )
    {
        printf("%d => %d %d\n",N,N/10,N%10);
        sum += N%10;
        N=N/10;///�ܤp
    }
    printf("%d",sum);
}
