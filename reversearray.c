#include<stdio.h>
int main()
{
	int n,a[10],i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nreverse elements are:");
	for(i=n-1;i>=0;i--)
		printf("%d\t",a[i]);
		return 0;
}
