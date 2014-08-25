#include<stdio.h>
main()
	{
		int n,LOOP;
		    LOOP=100;		
		float x,term,sum;
		printf("Input value of x:");
		scanf("%f",&x);
		sum=0;
		for(term=1,n=1;n<=LOOP;++n)
		{
			sum+=term;
			if(term<=0.0001)
			goto output;
			term*=x;
		}
		printf("\nFINAL VALUE OF N IS NOT SUFFICIENT\n");
		printf("TO ACHIEVE DESIRED ACCURACY\n");
		goto end;
		output:
		printf("\nEXIT FROM LOOP\n");
		printf("Sum=%f;No.of terms=%d\n",sum,n);
		end:
		;
	}

