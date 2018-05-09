#include<stdio.h>
int main()
{
float a,b,r,pi=3.14;
int v;
printf("enter the case of 1 to 2 /n 1 for area of rectangle/n 2 for area of circle");
switch(v)
{
	case1:
	{
		printf("enter the value of a and b for area of rectangle");
		scanf("%f%f"&a,&b);
		printf("sum is =%f",(a+b));
		
	}
break;
case2:
{
	printf ("enter the value of r for area of circle");
	scanf("%f"&r);
	printf("area of circle=%f",(pi*r*r));
	}
	break;
	default:
	{
		printf ("enter wrong instruction");
		}
	}
	return 0;
	}