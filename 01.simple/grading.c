#include<stdio.h>
main()
	{	float marks/100;	
		char grade;

		if(marks>79)
		  grade="Honours";
		else if (marks>59)
		  grade="First Divison";
		else if (marks>49)
		   grade="Second Divison";
		else if (marks>39)
		    grade="Third Divison";
		else 
		     grade="Fail";
		pritf ("%s\n",grade);
	}
