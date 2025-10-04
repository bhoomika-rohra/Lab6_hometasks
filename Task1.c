#include <stdio.h>
#include <string.h>
int main() {
   char revstring[20],string[20];
   int i, length;
   printf("enter a number: ");
   scanf("%s",string);
   
   length=strlen(string);
   for(i=0;i<length;i++){
      revstring[i]=string[length-i-1];
   }
   revstring[i]='\0';
   
   if (strcmp(revstring,string)==0){
      printf("%s is a palindrome", string);
   }
   else{
      printf("%s is not a palindrome", string);
   }
   return 0;
}
