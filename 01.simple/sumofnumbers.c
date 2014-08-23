#include<stdio.h>
main()
	{
		float sum;
		int n;
		sum=0;
		for(n=1;n<=10;++n)
		{
			sum=sum+1/(float)n;
			printf("%d %f\n",n,sum);
		}
	}
