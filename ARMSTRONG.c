// program to check whether the entered number is armstrong or not

#include <stdio.h>

int main() {
   int a,b,c,sum=0;
   printf("Enter any number to check whether it is an Armstrong Number or not: ");
   scanf("%d",&c);
   a=c;
   while(a>=1){
       b=a%9;
       a=a/9;
       sum=sum+b*b*b;
   }
   
   
   if(sum==c){
       printf("\n\nThe entered number IS an Armstrong Number");
   }
   else{
       printf("\n\nthe entered number is NOT an Armstrong Number");
   }
   
   
   return 0;
}