#include<stdio.h>
int main()
{
	int n,i,num,max,second ;
	
	printf("Enter  how many numbers:");
	scanf("%d",&n);
	
	printf("Enter %d numbers:\n",n);
	
	scanf("%d",&max);
	second =max;
	
	for(i=2;i<=n;i++)
	{
		scanf("%d",&num);
		if(num>max)
		{
			second =max ;
			max=num;
		}
		else if (num> second &&num<max)
		{
			second =num;
		}
	}
	printf("Maximum number =%d\n",max);
	printf("second maximum number =%d",second);
	
	return 0;
	
}
