#include <stdio.h>
#include <math.h>
int main()
{
	double x[10]={0},y[10]={0};
	int i,n;
	double sum=0,xba,yba,xyba,xfba,xbaf,b,a;
	printf("��������������n������n��Xi���ÿո����������n��Yi���ÿո����,���磺\n"); 
	printf("3\n");
	printf("1 2 3\n");
	printf("4 5 6\n");
	printf("ע��x��y��Ҫ���뷴�ˣ����мǵÿ��ǵ�λ��������\n");
	printf("�������������:\n");
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
