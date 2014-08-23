#include<stdio.h>
	main()
	{
		int count, N=10;
		float sum,average,number;
		sum=0;
		count=0;
while(count<N)
		{
			scanf("%f",&number);
			sum=sum+number; 
			count=count+1;
		}
	average=sum/N;
	printf("N=%d sum=%f",10,sum);
	printf("Average=%F",average);
	}

