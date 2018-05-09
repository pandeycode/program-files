#include<stdio.h>
void main()
{
	int array[5];
int i,a;
	printf("\n ENTER THE VALUES OF THE ARRAY\n");
	for(i=1;i<=5;i++)
	{
	printf("\n VALUE %d=",i);
		scanf("%d",&array[i-1]);
		printf("%d\n",array[i-1]);
		
	}
	for(i=1;i<=5;i++)
	{
	printf("%d\n",array[i-1]);	
	}
	
	printf("\n enter the position on which you want to know the value enter position\n");
	scanf("%d",&a);
	printf("%d",array[a-1]);
	array[4]=45;
	printf("\n%d",array[4]);
}