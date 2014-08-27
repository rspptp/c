#include<stdio.h>
main()
	{
		int purchaseprice,salvagevalue,yearsofservice;
		float depreciation;
		purchaseprice=500;
		salvagevalue=50;
		yearsofservice=5;
		scanf("%d %d %d",&purchaseprice,&salvagevalue,
				 &yearsofservice);
	depreciation=(purchaseprice-salvagevalue)/yearsofservice;
		printf("%d %d %d is: %f",depreciation);
	}
