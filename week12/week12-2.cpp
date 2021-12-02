#include <stdio.h>///選擇排序法//考!!
int a[100];
int main()
{
	for(int i=0;i<100;i++)scanf("%d",&a[i]);///1.input

	for(int i=0;i<100;i++)///3.左手
	{
		for(int j=i+1;j<100;j++)///4.右手
		{
			if(a[i]>a[j])///5.交換
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	for(int i=0;i<100;i++)printf("%d\n",a[i]);///2.output
}
