#include<stdio.h>
#include<math.h>
main()
	{
		int demandrate,setupcost,hcpipt,sqrt;
		float EOQ,TBO;
		printf("Enter the values of 				demandrate,setupcost,hcpipt");
		scanf("%d %d %d",&demandrate,&setupcost,&hcpipt);
		EOQ=sqrt(2*demandrate*setupcost/hcpipt);
		TBO=sqrt(2*setupcost/demandrate*hcpipt);
		printf("EOQ is :%f\n",EOQ);
		printf("TBO is :%f",TBO);
	}

		
