#include<stdio.h>
main()
{
	int i,j=0;
	for(i=100;i<200;i++)
	{
		if(i%7==0)
		{
			j=j+i;
			printf("%d\n",i);
		}
	}
}

