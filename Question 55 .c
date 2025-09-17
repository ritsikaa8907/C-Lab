// Write a program to print all the prime numbers from 1 to n.
#include<stdio.h>
int main()
{
  int i,j,n;
printf("Enter the number till you want to print prime numbers between:");
scanf("%d");
for(i=1;i<=n;i++){
if(n%i==0)
  printf("the prime numbers are:" ,i);
}
return 0;
}
