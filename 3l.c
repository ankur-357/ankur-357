# include<stdio.h>
int main()
{
char name[20];
int rollno;
float sub1, sub2, sub3, sub4, sum, score;
printf("\nEnter the name of student:");
scanf("%s", &name);
printf("\nEnter Roll number:");
scanf("%d", &rollno);
printf("\nEnter Marks in 4 Subjects:\n");
scanf("%f %f %f %f", &sub1, &sub2, &sub3, &sub4);

sum=sub1+sub2+sub3+sub4;
score=(sum/400)*100;
printf("\nName of student:%s", name);
printf("\nRoll Number: %d", rollno);
printf("\nsum=%f", sum);
printf("\nPercentage score secured=%f", score);
return 0;
}
