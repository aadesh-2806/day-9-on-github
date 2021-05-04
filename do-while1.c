#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// process.h
void main()
{
	int t,a,s,b;
	float c;
	//clrscr();
	printf("welcome\n");

	do
	{
	
	printf("enter value\n1 for add\n2 for sub\n3 for mult\n4 for div\n5 for exit\n");
	scanf("%d",&t);
	
	printf("enter value1");
	scanf("%d",&a);

	printf("enter value2");
	scanf("%d",&b);
	switch(t)
	{
		case 1:
			c=a+b;
			printf("%f",c);
			break;

		case 2:
			c=a-b;
			printf("%f",c);
			break;

		case 3:
			c=a*b;
			printf("%f",c);
			break;

		case 4:

			c=a/b;
			printf("%f",c);
			break;
		case 5:
			printf("Thank you");
			getch();
			exit(0);

		default:
			printf("Invalid");

	}
	}while(1);
	getch();
}
