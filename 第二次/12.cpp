#include<stdio.h>
int main()
{
	double faHeight,moHeight,baby,teen;	
	int m,X,one,two;
	
	scanf("%lf%lf",&faHeight,&moHeight);
	printf("����Ա��ǣ� 1.��    2.Ů \n");
	scanf("%d",&m);
	if (m == 1)
	{
		baby=(faHeight + moHeight)* 0.54;		
	}
	else 
    {
		baby=(faHeight * 0.923 + moHeight) / 2;
		
	}
    
	printf("ϲ���Ͳ�ϲ����:  1.ϲ��     2.��ϲ��\n");
	scanf("%d",&X);
	if (X == 1) 
	{
		printf("ϲ��һ�ֻ���ϲ�����֣�  һ. 1     ��. 2 \n");
		scanf("%d",&one);
		if (one == 1)
		{
			printf("ϲ��������������ϰ�ߣ�  1.����   2.����ϰ��  \n");
			scanf("%d",&two);
			if(two == 1)
				{
					teen=baby + (baby*0.02);
					printf("%.2lf",teen);
				}
			else 
			{
				teen=baby + (baby*0.015);
				printf("%.2lf",teen);
			}
		}
		else 
		{
			teen=baby + (baby*0.035);
			printf("%.2lf",teen);
		}
}
	else 
		printf("%.lf",baby);
	return 0;
}
	
	
