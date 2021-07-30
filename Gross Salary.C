/*Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%        */


#include<stdio.h>
#include<conio.h>
void main()
{
long int salary,gross=0,hra=0,da=0;
printf("Enter the salary: ");
scanf("%ld",&salary);
if(salary<=10000)
{
hra=(salary*20)/100;
da=(salary*80)/100;
gross=salary+hra+da;
printf("\nThe gross salary is: %ld",gross);
}
else if(salary<=20000)
{
hra=(salary*25)/100;
da=(salary*90)/100;
gross=salary+hra+da;
printf("\nThe gross salary is: %ld",gross);
}
else if(salary>20000)
{
hra=(salary*30)/100;
da=(salary*95)/100;
gross=salary+hra+da;
printf("\nThe gross salary is: %ld",gross);
}
getch();
}
