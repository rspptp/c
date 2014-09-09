#include<stdio.h>
#include<math.h>
main()
	{
		double t;
		float r,LAMADA=0.001;
		int i,R;
		for(i=1;i<=27;++i)
		{
			printf("--");
		}
		printf("\n");
		for(t=0;t<=3000;t+=150)
		{
			r=exp(-LAMADA*t);
			R=(int)(50*r+0.5);
			printf("| ");
			for(i=1;i<=R;++i)
			{
				printf("*");
			}
			printf("#\n");
		}
		for(i=1;i<3;++i)
		{
			printf("|\n");
		}
	}

