#include<stdio.h>
main()
	{
		int value[4][3];
		int girl_total [4],item_total[3];
		int i,j,grand_total;
		printf("Intput data\n");
		printf("Enter values, one at a time, row-wise\n\n");
		for(i=0;i<4;i++)
		{
			girl_total[i]=0;
			for(j=0;j<3;j++)
			{
				scanf("%d",&value[i][j]);
			       girl_total[i]=girl_total[i]+value[i][j];
			}
		}
		for(j=0;j<3;j++)
		{
			item_total[j]=0;
			for(i=0;i<4;i++)
                          item_total[j]=item_total[i]+value[i]      [j];
		}
		grand_total=0;
		for(i=0;i<4;i++)
		 grand_total=grand_total+girl_total[i];
		printf("\n girls totals\n\n");
		for(i=0;i<4;i++)
		 printf("Salesgirl[%d]=%d\n",i+1,girl_total[i]);
		printf("\n items totals\n\n");
		for(j=0;j<3;j++)
		 printf("item[%d]=%d\n",j+1,item_total[j]);
		printf("\nGrandtotal=%d\n",grand_total);
	}
		
