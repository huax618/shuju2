#include<stdio.h>
 
int main() {


int N=0,K=0;
scanf("%d %d",&N,&K);
int numbers[N];
int i=0;
for(;i<N;i++)
{
	if(i!=N-1)
	scanf("%d ",&numbers[i]);
	else
	scanf("%d",&numbers[i]);
	
}
int j=0;
for(;j<K;j++)
{
	 i=0;
 //��ʵ�ֶ�Ԫ�صĵ�һ������ 
 //��ͷ��β�Ƚ���������Ԫ�أ����ǰ���Ԫ�ش��������ĺ���Ԫ�أ��򽻻����ǡ�
	 int temp=0;
	for(;i<N-1-j;i++)
	{
		if(numbers[i]>numbers[i+1])
		{
			temp=numbers[i+1];
			numbers[i+1]=numbers[i];
			numbers[i]=temp;
		}
		
	}
	
}
i=0;
for(;i<N;i++)
{
	printf("%d",numbers[i]);
	if(i!=N-1)
	printf(" ");
	
}

return 0;

}

