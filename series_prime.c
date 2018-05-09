#include<stdio.h>
void main()
{
	int i=1,j,p=0;
	for(j=1;j<=100;j++)
	{
		
		if(j==1)
		{
			printf("%d\t",j);
		}
		else{
			
			      while(i<=j/2)
			      {
				    if(j%i==0)
				   {
					p=p+(j%i);
					p++;
			
				}
				i++;
			
			}
			
			if(p==1)
			{
				printf("%d\t",j);
			}}
			
		
	}
}