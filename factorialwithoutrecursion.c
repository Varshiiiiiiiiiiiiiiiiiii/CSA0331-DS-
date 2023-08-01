#include<stdio.h>
int main()
{
	int n,i;
	unsigned long long factorial=1;
	printf("Enter a number to find factorial:");
	scanf("%d",&n);
	if(n<0)
	printf("Enter a positive integer number:");
	else
	{
		for(i=1;i<=n;++i)
		{
			factorial *=i;
		}
		printf("factorial number %d=%llu",n,factorial);
	}
	return 0;
}
