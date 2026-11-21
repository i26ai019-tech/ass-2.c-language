#include<stdio.h>
int main()
{
	int a[10],b[10],temp,i;
	
	printf("Enter 10 elements of first array:\n");
	
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("Enter 10 elements of second array:\n");
		for (i=0;i<10;i++)
		{
			scanf("%d",&b[i]);
			
		}
			for (i=0;i<10;i++)
			{
				temp=a[i];
				a[i]=b[i];
				b[i]=temp;
			}
			printf("first array after  swapping :\n");
				for (i=0;i<10;i++)
				{
					printf("%d",a[i]);
				}
			printf("second array after swapping:\n");
				for (i=0;i<10;i++)
				{
					printf("%d",b[i]);
				}
				return 0;
					
			 	
	
}
