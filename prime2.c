#include<stdio.h>
void main()
{
	
	int i,j,p=0,start,end;
	printf("enter the start point of which you want to check the prime numbers in between the series\n");
	scanf("%d",&start);
	printf("\nenter the end point of which you want to check the prime numbers in between the series\n ");
	scanf("%d",&end);
   j=start;
	while(j<=end)
	{
	
	if(j==1)
	{
		printf("%d\t",j);
	}
	else
	{
		for(i=1;i<=j/2;i++)
		{
			if(j%i==0)
			{
				
				p=p+(j%i);
				p++;
				}
			}}
		if(p==1)
		{
			printf("%d\t",j);
		}
		
		p=0;
		i=1;
		j++;
	}
	}