#include<stdio.h>
main()
	{
		int m;
		float x,sum,average;
	      printf("This program computer the average of a set of 					numbers\n");
		printf("Enter values one after another\n");
		sum=0;
		for(m=1;m<=1000;++m)
		{
			scanf("%f",&x);
			if (x<0)
			break;
			sum+=x;
		}
		average=sum/(float)(m-1);
		printf("\n");
		printf("Number of values=%d\n",m-1);
		printf("Sum		=%f\n",sum);
		printf("Average		=%f\n",average);
	}
