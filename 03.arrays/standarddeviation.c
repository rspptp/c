#include<stdio.h>
#include<math.h>
main()
	{
		int i,n;
		float value[100],deviation,sum,sumsqrt,mean,variance,
					stddeviation;
		sum=sumsqrt=n=0;
		printf("Input values:input -1 to end \n");
		for (i=1;i<100;i++)
		{
		  scanf("%f",&value[i]);
		  if (value[i]==-1)
			break;
		  sum+=value[i];
		  n+=1;
		}
		mean=sum/(float)n;
		for(i=1;i<=n;i++)
		{
		  deviation=value[i]-mean;
		  sumsqrt+=deviation*deviation;
		}
		variance=sumsqrt/(float)n;
		stddeviation=sqrt(variance);
		printf("\nNumber of items:%d/n",n);
		printf("Mean:%f\n",mean);
		printf("Standard deviation:%f\n",stddeviation);
	}

