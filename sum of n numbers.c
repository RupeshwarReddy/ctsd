#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0;
	printf("enter a  value of n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum of %d numbers is %d",n,sum);
	
	getch();
	return 0;
}

