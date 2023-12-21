#include<stdio.h>
int main()
{
	int a[10],i,pos,n;
	printf("enter size of array:\n");
	scanf("%d",&n);
	printf("\nenter elements of array:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter the position of element you want to delete:\n");
	scanf("%d",&pos);
	for (i=pos-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	printf("the array after deleting element is:\n");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}