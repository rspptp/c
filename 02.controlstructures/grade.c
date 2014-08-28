#include<stdio.h>
main()
	{
		int marks;
		char grade;
		printf("Enter the marks\n",marks);
		if (marks>80)
		  grade = "Honours";
		 else if(marks>60)
		     grade = "First Divison";
		   else if(marks>40)
			grade = "Second Divison";
			else if(marks<40)
			  grade = "Fail";
		printf("%s\n",grade)
	}
