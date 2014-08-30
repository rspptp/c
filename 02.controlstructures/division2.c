#include<stdio.h>
main()
	{
		int n,m,p;
		for(n=1,m=50;n<=m;n=n+1,m=m-1)
		{
			p=m/n;
			printf("%d %d %d\n",n,m,p);
		}
	}
