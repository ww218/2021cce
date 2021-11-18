#include <stdio.h>///篩子法
int a[10000000]={0,0,0,0};///沒有寫的會補0
//外面宣告空間較大
int main()///0:還沒被殺死，1:被殺死
{
    int ans=0;
    for(int i=2;i<10000000;i++)
    {
        if(a[i]==0)///如果活著
        {
            ans++;
            for(int k=i+i;k<10000000;k=k+i) a[k]=1;
        }
    }
    printf("ans:%d",ans);

}

