#include<stdio.h>
main()
{
	int score;
	char grade;
	printf("enter the score : ");
	scanf("%d",&score);
	
    grade = (score >= 80)?'A':(score >= 70)? 'B':(score >= 60)? 'C':(score >= 50)? 'D':(score >= 35)? 'E': 'F';
    
    printf("your grade is %c\n",grade);
	

	
}