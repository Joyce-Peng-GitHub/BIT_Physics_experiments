#include <stdio.h>
#include <math.h>
int main()
{
	double x[10]={0},y[10]={0};
	int i,n;
	double sum=0,xba,yba,xyba,xfba,xbaf,b,a;
	printf("请输入数据组数n，输入n个Xi，用空格隔开，输入n个Yi，用空格隔开,例如：\n"); 
	printf("3\n");
	printf("1 2 3\n");
	printf("4 5 6\n");
	printf("注意x和y不要输入反了，还有记得考虑单位换算问题\n");
	printf("请输入你的数据:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%lf",&y[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=x[i];
	}
	xba=sum/n;
	sum=0;
	for(i=0;i<n;i++)
	{
		sum+=y[i];
	}
	yba=sum/n;
	sum=0;
	for(i=0;i<n;i++)
	{
		sum+=x[i]*x[i];
	}
	xfba=sum/n;
	sum=0;
	for(i=0;i<n;i++)
	{
		sum+=x[i]*y[i];
	}
	xyba=sum/n;
	sum=0;
	xbaf=xba*xba;
	b=(xyba-xba*yba)/(xfba-xbaf);
	a=yba-b*xba;
	printf("xba = %lf\n",xba);
	printf("yba = %lf\n",yba);
	printf("xyba = %lf\n",xyba);
	printf("xbaf = %lf\n",xbaf);
	printf("xfba = %lf\n",xfba);
	printf("Y = %lfX + %lf",b,a);
	return 0;
} 
