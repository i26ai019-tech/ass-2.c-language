#include<stdio.h>
int main()
{
	int a[10],i;
	int positive=0,negative=0,zero =0;
	
	printf("Enter 10 integers;\n");
	
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		
		if(a[10]>0)
		positive++;
		else if(a[i]<0)
		negative++;
		else
		zero++;
	}
	printf("positive numbera=%d\n",positive);
	printf("negatuve numbers=%d\n",negative);
	printf("zero numbers =%d\n",zero);
	
	return 0;
}
