#include <stdio.h>
int binarySearch(int a[], int beg, int end, int val)
{
int mid;
if(end >= beg)
{
 mid = (beg + end)/2;
if(a[mid] == val)
{
return mid+1;
}
else if(a[mid] < val)
{
return binarySearch(a, mid+1, end, val);
}
else
{
return binarySearch(a, beg, mid-1, val);
}
}
return -1;
}
int main() {
int a[10],n,val;
printf("enter the size  of array:\n");
scanf("%d",&n);
printf("enter the elements in array:\n");
for (int i=0;i<n;i++)
{
   scanf("%d\n",&a[i]);
}
printf("enter the element you want to search:\n");
scanf("%d",&val);
int res = binarySearch(a, 0, n-1, val);
printf("\nElement to be searched is  %d", val);
if (res == -1)
printf("\nElement is not present in the array");
else
printf("\nElement is present at %d position of array", res);
return 0;
}
