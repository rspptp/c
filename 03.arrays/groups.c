#include<stdio.h>
main()
	{
		float value[50];
		int i,low,high;
		int group[11];
		for(i=0;i<50;i++)
		scanf("%f",&value[i]);
		++group[(int) (value[i])/10];
		printf("\n");
		printf("Group range frequency\n\n");
		for(i=0;i<11;i++)
		{
			low=i*10;
			if(i==10)
		  	  high=100;
			else
			  high=low+9;
			printf("%2d %3d to %3d %d\n",i+1,low,high,group[i]);
		}
	}
