#include<stdio.h>
int main()
{
	
	int i=0,array[5];
	while(i<5)
	array[i]=i++;
	for(i=0;i<5;i++)
	printf("%d",array[i]);
	return 0;
		}
	