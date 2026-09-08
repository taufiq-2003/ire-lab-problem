// Write a C program that takes an integer N from the user and uses a for loop to print the multiplication table of N from 1 to 10. The program should display each multiplication step clearly, such as 5 × 1 = 5, 5 × 2 = 10, and so on up to 5 × 10 = 50.

#include <stdio.h>
int main(){

  int N;
  int result;
  printf("please enter the number you want the multiplication table of: \n ");
  scanf("%d",&N);

  for (int i=1; i <= 10; i++){


    result = i*N;
    printf("%d X %d = %d \n", N,i, result);


  }


  return 0;
}