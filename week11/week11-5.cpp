#include <stdio.h>
int a[100];
int main()
{
	for(int i=0;i<100;i++)///1.intput
	{
		scanf("%d",&a[i]);
	}
	for(int k=0;k<100-1;k++)///5.一輪跑100-1次
	{
		for(int i=0;i<100-1;i++)///4.左到右巡一輪
		{
			if(a[i]>a[i+1])///3.比較
			{
				int temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}

	}
	for(int i=0;i<100;i++)///2.output
	{
		printf("%d\n",a[i]);
	}
}
