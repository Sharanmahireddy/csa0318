#include<stdio.h>
int main()
{
int keyelement,i;
int arr[10];
printf("Enter 10 elements:");
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the element to search: ");
scanf("%d", &keyelement);
for (i=0;i<10;i++)
{
if(arr[i]==keyelement)
{
printf("The element is present at index %d ",i);
break;
}
}
return 0;
}