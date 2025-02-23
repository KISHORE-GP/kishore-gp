#include<stdio.h>
int main()
{
 int size;
 int i,arr[size];
 printf("enter the no of elements:");
 scanf("%d",& size);
 printf("enter the elemnts %d:",arr[size]);
 for(i=0;i<size;i++)
{
  scanf("%d",& arr[size]);
  printf("the elements are %d\n",arr[size]);
}
return 0;
}
