//力学基本量测量数据处理
#include <stdio.h>
#include <math.h>
int main()
{
	double a[10]={0},aba,sum,S;
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	aba=sum/n;
	sum=0;
	for(i=0;i<n;i++)
	{
		sum+=(a[i]-aba)*(a[i]-aba);
	}
	S=sqrt(sum/(n-1));
	printf("aba=%lf,S=%lf",aba,S);
 } 
