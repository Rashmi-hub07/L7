#include<stdio.h>
 int main() 
 {
     int num,fact=1;
     printf("enter the positive integer:");
     scanf("%d",&num);
     
         for(int i=1;i<=num;i++)
         {
             fact*=i;
       
         } 
      printf("fact of %d\n",fact);
     return 0;
     
 }
