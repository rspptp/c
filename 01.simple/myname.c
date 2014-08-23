#include<stdio.h>
main()
	{
			char answer;
			printf("Would you like to know my name?\n");
		
			printf("Type Y for Yes and N for No:");
			answer = gerchar();
		if(answer == 'Y' // answer == 'y')
			printf("\n\nMy name is PAVAN\n");
		else
			printf("\n\nYou are good for nothing\n");
	}
