/*Write a c program to input marks of five subjects Physics,Chemistry,Biology,Mathematics and Computer.
Calculate percentage and grade according to following:
Percentage>=90%: Grade A
Percentage>=80%: Grade B
Percentage>=70%: Grade C
Percentage>=60%: Grade D
Percentage>=40%: Grade E
Percentage<40%: Grade F             */


#include<stdio.h>
#include<conio.h>
void main()
{
float ph,ch,bio,math,com,p,add;
printf("Enter the number of Physics,Chemistry,Biology,Mathematics,Computer: \n");
scanf("%f%f%f%f%f",&ph,&ch,&bio,&math,&com);
add=ph+ch+bio+math+com;
p=add/5;
if(p>=90)
printf("The percentage is %f and Grade A",p);
else if(p>=80)
printf("The percentage is %f and Grade B",p);
else if(p>=70)
printf("The percentage is %f and Grade C",p);
else if(p>=60)
printf("The percentage is %f and Grade D",p);
else if(p>=40)
printf("The percentage is %f and Grade E",p);
else if(p<40)
printf("The percentage is %f and Grade F",p);
getch();
}