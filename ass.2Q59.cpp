#include<stdio.h>
int main()
{
	int a[10],i,n,key,count=0;
	
	printf("Enter number of elements :\n");
	scanf("%d" ,&n);
	
	printf("Enter array elements:\n");
	
	for (i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to find occurrence:\n");
	scanf("%d",&key);
	
	for (i = 0; i < n; i++)
	{
		if(a[i]==key)
		{
			count++;
		}
	}
	printf("occurrence of %d =%d\n",key,count);
	
	return 0;
}
