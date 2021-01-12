#include<stdio.h>
 int main()
{ //1.Read the marks from the user
printf("Enter the marks: ");
int marks=0;
scanf("%d",&marks);
//2.check on those marks
if(marks<=100,marks>=85)
{
	printf("GRADE A");
}
else if (marks<=84,marks>=70)
printf("GRADE B");

else if(marks<=69,marks>=55)
printf("GRADE C");

else if (marks<=54,marks>=40)
printf("GRADE D");

else if(marks<40)
printf("GRADE F");

}

