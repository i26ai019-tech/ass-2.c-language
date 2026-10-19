#include<stdio.h>
int main()
{
	int a[10],i,odd=0,even=0;
	
	printf("Enter 10 integeres:\n");
	
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		
		if(a[i]%2==0)
		even++;
		else
		odd++;
	}
	printf("Total even numbers=%d\n",even);
	
	printf("Total odd numbers=%d",odd);
	
	return 0;
}
