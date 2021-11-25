#include <stdio.h>///泡泡排序法
int a[10]={3,0,1,8,7,2,5,4,6,9};
int main()
{
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");///印出陣列
///-----------------------------------------------
    for(int i=0;i<10-1;i++)
    {
        if(a[i]>a[i+1])///相臨兩兩交換
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }

    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");///印出陣列
///-----------------------------------------------
    for(int i=0;i<10-1;i++)
    {
        if(a[i]>a[i+1])///相臨兩兩交換
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }

    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");///印出陣列
///-----------------------------------------------
    for(int i=0;i<10-1;i++)
    {
        if(a[i]>a[i+1])///相臨兩兩交換
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }

    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");///印出陣列
}

