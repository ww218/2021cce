#include <stdio.h>///�z�l�k//�L�X�Ҧ����
int a[1000000];
int main()
{
    int m;
    scanf("%d",&m);
    int ans=0;
    for(int i=2;i<m;i++)
    {
        if(a[i]==0){
            printf("%d ",i);///�L�X���(���)
            ans++;
            for(int k=i+i;k<m;k+=i)a[k]=1;
        }
    }
    printf("�`�@: %d",ans);
}

