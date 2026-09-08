// Write a C program that takes a positive integer N from the user and uses a for loop to calculate and display the factorial of N. For example, if the user enters 5, the program should calculate and display 120 as the factorial.


#include <stdio.h>

int main (){

  int N;
  int result=1;
  printf("enter a positive N for which you want the factorial for  \n");
  scanf("%d", &N);
  
  printf("the factorial of %d = ",N);
  
  for (int  i = 1; i <= N; i++)
  {
    printf("%d",i);
    
    result=result*i;
    if (i==N)
  {
    break;
  }
  printf("X");
  }
  
  
  
  printf(" = %d  \n",result);
  



  return 0;
}