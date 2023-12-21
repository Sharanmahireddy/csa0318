#include<stdio.h>
int main()
{
	int a[10],i,pos,value,n;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("\nenter the elements:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter the position where you want to insert:\n");
	scanf("%d",&pos);
	printf("\nenter the value to be inserted:\n");
	scanf("%d",&value);
	for (i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=value;
	printf("the array after inserting element is:\n");
	for (i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}