#include <stdio.h>///矩陣乘法
int a[10][10],b[10][10],c[10][10];
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++)///(1)讀入A
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++)///(2)讀入B
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	for(int i=0;i<n;i++)///算答案
	{
		for(int j=0;j<n;j++)
		{
			c[i][j]=0;//迴圈前面=0
			for(int k=0;k<n;k++)
			{
				c[i][j] += a[i][k] * b[k][j];////迴圈中間拿來算
			}
			printf("%3d ",c[i][j]);	////迴圈後印出來
		}
		printf("\n");
	}
}
