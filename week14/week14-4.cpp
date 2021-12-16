#include <stdio.h>///矩陣加法
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


	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j] = a[i][j] + b[i][j];///(3)相加
			printf("%3d ",c[i][j])///印
		}
		printf("\n");
	}

