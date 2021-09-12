//2. Demonstrate addition of two floating type numbers by using call by address.


#include<stdio.h>
int main()
{
 float num1,num2,*p,*q, addition ;
 
 printf("enter value of two number :");
 scanf("%f%f",&num1,&num2);
 
 p=&num1;
 q=&num2;
 
 addition = *p+*q;
 
 printf("addition of two given numbers  is %.2f",addition);
 
 return 0;
 }
