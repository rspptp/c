#include<stdio.h>
main()
	{
		int quantity;
		float BASE-SALAR,BONUS-RATE,COMMISSION;
		BASE-SALAR=1500
		BONUS-RATE=200
		COMMISON=0.02
		float gross-salary,price;
		float bonus, commission;
		printf("Input number sold and price\n");
		scanf("%d %f",&quantity,&price);
		bonus		=BONUS-RATE*quantity;
		comission	=COMMISSION*quantity;
		gross-salary	=BASE-SALARY+bonus+comission;
		printf("\n");
		printf("Bonus=%f\n",bonus);
		printf("Commission=%f\n",commission);
		printf("Gross salary=%f\n",gross-salary);
	}
