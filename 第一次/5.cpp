#include <stdio.h>
int main(int argc, char *argv[0])
{
	float mon,sal;
    int i,year,type;
    printf("t*************\n");
    printf("t����һ����Ϣ���������������Ŷ\n");
    printf("t��ǰ���ڴ������Ϊ7.95% \n");
    printf("t��ǰ���ڴ��Ϊ��0.72% \n");
    printf("t************* \n");
    printf("��������Ľ�\n");
    scanf("%f",&mon);
    printf("\n��������������");
    scanf("%d",&year);
    printf("\n������������1������ڣ�2������");
    scanf("%d",&type);
    if (type==1)
{
	float a,b=0.0072;
	a=year;
	mon=mon*(1+a*b);
	printf("%f\n",mon);
}
    else
{
	float a=0.0795,b;
	b=year;
	mon=mon*(1+a*b);
	printf("%f\n",mon);
 } 
    
    return 0;
 } 


