#include<stdio.h>

void main()
{
	
	int a;
	float b;
	printf("hello\nenter units=");
	scanf("%d",&a);
	
	if(a<100)
	{
		b=a*1.5;
		printf("%f",b);
	}
	else
	{
		if(a<300)
		{
			b=(a-100)*2.0+150;
			printf("%f",b);
		}
		else
		{
			if(a<500)				//electricity_bill
			{
				b=(a-300)*2.5+550;
				printf("%f",b);
			}
			else
			{
				if(a<1000)
				{
					b=(a-500)*4.0+1050;
					printf("%d",b);
				}
				else
				{
					b=(a-1000)*5.0+3050;
					printf("%d",(a-1000)*5.0+3050);
				}
				
			}
			
		}
	}
	getch();
	
}	
