#include <stdio.h>///�z�l�k
int a[10000000]={0,0,0,0};///�S���g���|��0
//�~���ŧi�Ŷ����j
int main()///0:�٨S�Q�����A1:�Q����
{
    int ans=0;
    for(int i=2;i<10000000;i++)
    {
        if(a[i]==0)///�p�G����
        {
            ans++;
            for(int k=i+i;k<10000000;k=k+i) a[k]=1;
        }
    }
    printf("ans:%d",ans);

}

