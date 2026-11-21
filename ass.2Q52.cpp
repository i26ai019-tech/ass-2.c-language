#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	int max,min;
	
	printf("Enter 9 elements of matrix:\n");
	
	for(i = 0; i < 3; i++)
	{
			for(j = 0; j < 3; j++)
			{
				scanf("%d",&a[i][j]);
			}
	}
			max = min = a[0][0];
			
				for(i = 0; i < 3; i++)
				{
						for(j = 0; j < 3; j++)
						{
						if(a[i][j] >max)
						max = a[i][j];
						
						if(a[i][j] <min)
						min = a[i][j];
						}
				}
		printf("Maximum element =%d\n",max);
		printf("minimum element +%d\n",min);
		
		return 0;		
	}

