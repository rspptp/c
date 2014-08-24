#include<stdio.h>
main()
	{	
		
		long int loan, loan1,loan2,loan3,sancloan,sum23;
		printf("Enter the values of previous two loans:\n");
		scanf("%d %d",&loan1,loan2);
		printf("\nEnter the value of new loan:\n");
		scanf("%d",&loan3);
		sum23=loan2+loan3;
		sancloan=(loan>0?0:(sum23>50000)?50000-loan2:loan3);
		printf("\n\n");
		printf("Previous loans pending:\n%d %d\n",loan1,loan2);
		printf("Loan requested = %d\n",loan3);
		printf("Loan sanctioned = %d\n",sancloan);
	}
	

