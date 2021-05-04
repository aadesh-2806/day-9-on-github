#include<stdio.h>
#include<math.h>

void main()
{	
	int i,s,t,n,r,j;
	char a[50];
	printf("hello aadesh agrawal(2019uec1660)\nenter string=");
	gets(a);
	
	t=0;
	for(i=0;a[i]!='\0';i++);
	for(s=0;s<i;s++)
	{
		for(j=s+1;j<i;j++)
		{
			if(a[s]>a[j])
			{
				t=a[s];
				a[s]=a[j];
				a[j]=t;
			}
		}
	}

	for(s=0;s<i;s++)
	{
		r=1;
		for(j=s+1;j<i;j++)
		{
			if(a[s]==a[j])
			{
				r++;
			}
			else
			{
				break;
			}
		}
		printf("%c=%d\n",a[s],r);
		s=j-1;
	}
	
	getch();
}
