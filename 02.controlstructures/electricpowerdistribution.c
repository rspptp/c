#include<stdio.h>
main()
	{
		int units,custnum;
		float charges;
		printf("Enter CUSTOMER NO.and UNITS consumed\n");
		scanf("%d %d",&custnum, &units);
		if(units <=200)
		   charges=0.5*units;
		else if(units<=400)
			charges=100+0.68*(units-200);
			  else if (units<=600)
			charges=230+0.8*(units-400);
			  else
			charges=390+(units-600);
	     printf("\n\nCustomer No:%d:Charges=%f\n",custnum,charges);
	}
