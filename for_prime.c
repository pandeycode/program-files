#include<stdio.h>
void main()
{
	int i,n,flag=0;
	printf("enter the value of n to check wheather a number is prime or not");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=flag+(n%i);
			flag++;
			
		}
		
	}
	
	if(flag==1)
	{
		
		printf("%d is  a prime number ",n);
	} 
	else
	{
		printf("%d  is not a prime number",n);
	}
}