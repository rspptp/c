#include<stdio.h>
main()
	{
		char key[items+1],response[items+1];
		int count,i,student,n,correct[items+1],items,STUDENTS;
				items=25;
				STUDENTS=3;
		printf("Intput key to the items\n");
		for(i=0;i<items;i++)
		   scanf("%c",&key[i]);
		scanf("%c",&key[i]);
		key[i]='\0';
		for(student=1;student<=STUDENTS;student++);
		{
			count=0;
			printf("\n");
			printf("Input responses of students-%d/n",student);
			for(i=0;i<items;i++)
			  scanf("%c",&response[i]);
			scanf("%c",&response[i]);
			response[i]='\0';
			for(i=0;i<items;i++)
			  correct[i]=0;
			for(i=0;i<items;i++)
			  if(response[i]==key[i])
			   {
				count=count+1;
				correct[i]=1;
			   }
			printf("\n");
			printf("Students-%d\n",student);
			printf("Score is %d out of %d\n",count);
			printf("Response to the items below are wrong\n");
			n=0;
			for(i=0;i<items;i++)
			  if(correct[i]==0)
			{
			  printf("%d",i+1);
			  n=n+1;
			}
			if(n==0)
			  printf("NIL\n");
			printf("\n");
		}
	}	
