#include<stdio.h>
#include<conio.h>
//Write a C Program to Calculate Profit and Loss on a Transaction.
void main()
{
  int a,b,profit,loss;
  printf("enter your a:");
  scanf("%d",&a);
  printf("enter your b:");
  scanf("%d",&b);
  profit=a+b;
  loss=a-b;
  printf("profit is %d:",profit);
  printf("loss is %d:",loss);
}