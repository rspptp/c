#include<stdio.h>
main()
	{
		int i,j,k,n;
		printf("Enter no of rows");
		scanf("%d",&n);
		for (i=1;i<=n;i++)
		{
			for (j=1;j<=n;j++)
			printf(" ");
			for (k=1;k<=n;k++)
			printf("s");
			printf("\n");
		}
	}
