#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	//clrscr();
	scanf("%d", &n);
	i=1;
	do
	{
		printf("%d", i);
		i=i+1;
	}while(i<=n);
	getch();

}
