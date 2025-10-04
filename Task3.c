#include <stdio.h>
int main(){
   int num, even,odd;
   int i;
   even=0;
   odd=0;
   for (i=0;i<10;i++){
      printf("enter a number:");
      scanf("%d",&num);
      if (num%2==0){
         even+=1;
      }
      else{
         odd+=1;
      }
   }
   printf("the number of even numbers is: %d\n", even);
   printf("the number of odd numbers is: %d\n", odd);
   return 0;
   
}
