#include <stdio.h>

void main(){
    int a;
    // Write C code here
    printf("enter no. to check you are pass of fail");
    scanf ("%d",&a);
    if(a>=0 && a<30){
       printf(" failed");
    }
   else if (a>=30 && a<60){
    printf("C grade  # pass");
   }
   else if (a>=60 && a<80){
    printf("B grade  # pass");
   }
   else if ( a>=80 && a<100){
     printf("A grade   #pass");
   }
   else{
       printf("%d is invalid input",a);
   }
}