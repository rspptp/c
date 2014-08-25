#include<stdio.h>
main()
	{
		int row,column,y;
		row=1;
		printf("MULTIPLICATION TABLE\n");
		printf ("- - - - - - - - - - - - - - - - - -\n");
		do
		{
			column=1;
			do
				{
					y=row*column;
					printf("%4d",y);
					column=column+1;
				}
			while (column<=10);
			printf("\n");
			row=row+1;
		}
		while(row<=12);
		printf("- - - - - - - - - - - - - - - - - - \n");
	}
		
