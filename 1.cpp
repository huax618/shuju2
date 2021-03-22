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
 //先实现对元素的第一次排序 
 //从头到尾比较相邻两个元素，如果前面的元素大于其紧随的后面元素，则交换它们。
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

