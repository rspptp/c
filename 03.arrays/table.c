#include<stdio.h>
main()
	{
		int r,c,product[r][c],i,j;
		printf("MULTIPLICATION OF TABLES\n");
		printf(" ");
		for(j=1;j<=c;j++)
		  printf("%4d",j);
		printf("\n");
		printf("_______________________________\n");
		for(i=0;i<r;i++)
		{
			r=i+1;
			printf("%2d|",r);
			for(j=1;j<=c;j++)
			{
				c=j;
				product[i][j]=r*c;
				printf("%4d",product[i][j]);
			}
			printf("\n");
		}
	}
