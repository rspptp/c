#include<stdio.h>
main()
	{
		int distance,u,t,a;
		printf("Enter the value of u,t,a\n");
		scanf("%d %d %d",&u,&t,&a);
		distance=u*t+(a*t*t)/2;
		printf("distance is :%d",distance);
	}
