#include<stdio.h>
void main()
{
	int a,b,v;
	printf("enter the case number 1 to 3 for the following operation\n1 for add \n2 for substraction\n3 for check even odd number\n");
	
	scanf("%d",&v);
	switch(v)
	{
		case 1:
		
			printf("enter the two value for addition \n");
			scanf("%d%d",&a,&b);
			printf("sum=%d",(a+b));
	
		break;
		
		case 2:
		
		
			printf("enter the two value for substraction \n");
			scanf("%d%d",&a,&b);
			printf("sub=%d",(a-b));
		
		break;
		case 3:
		printf("enter the value to check wheather a number is even or odd\n");
		scanf("%d",&a);
		if(a%2==0)
		{
			printf("the number is even");
		}
			else {
				printf("the number is odd");
			}
		break;
		default:
		
			printf("you entered wrong instruction");
		
	}
}