#include<stdio.h>
main()
	{
		int FIRST,SECOND,n,m,i,j,roll_number,marks,total;
			FIRST=360;
			SECOND=240;
		printf("Enter number of studentes and subjects\n");
		scanf("%d %d",&n,&m);
		printf("\n");
		for(i=1;i<=n;++i)
	  {     
		printf("Enter roll_number:");
		scanf("%d",&roll_number);
		total=0;
	      printf("\nEnter marks of%d subjects for ROLL NO%d\n", 				m,roll_number);
		for(j=1;j<=m;j++)
		{
			scanf("%d",&marks);
			total=total+marks;
		}
		printf("TOTAL MARKS=%d",total);
		if(total >=FIRST)
		   printf("(First Divison)\n\n");
		else if (total>=SECOND)
		   printf("(Second Divison)\n\n");
		  else
			printf("(***FAIL***)\n\n");
	   }
	}		
