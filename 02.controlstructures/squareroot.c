#include<stdio.h>
#include<math.h>
main()
	{
		double x,y;
		int count;
		count=1;
		printf("Enter FIVE real values in a LINE\n");
	read:
		scanf("%f", &x);
		printf("\n");
		if(x<0)
		printf("Value-%d is negative\n",count);
		else
		{
			y=sqrt(x);
			printf("%f\t %f\n",x,y);
		}
		count=count+1;
		if (count<=5)
	goto read;
		printf("\nEnd of computation");
	}

