#include <stdio.h>///選擇排序法
int a[10]={9,8,7,6,5,4,3,2,1,0};
int main()
{
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("開始之前\n");

    for(int i=0;i<10;i++)///左手i定住
    {
        for(int j=i+1;j<10;j++)///右手j
        {
            if(a[i]>a[j])///右手開始比較，希望左邊小
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("最後結束\n");

}

