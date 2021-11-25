#include <stdio.h>///篩子法//印出所有質數
int a[1000000];
int main()
{
    int m;
    scanf("%d",&m);
    int ans=0;
    for(int i=2;i<m;i++)
    {
        if(a[i]==0){
            printf("%d ",i);///印出質數(國王)
            ans++;
            for(int k=i+i;k<m;k+=i)a[k]=1;
        }
    }
    printf("總共: %d",ans);
}

