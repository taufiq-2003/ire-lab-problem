// Write a C program that takes an integer N from the user and uses a for loop to print all even numbers from 1 to N. The program should also calculate and display the sum of all the even numbers.

#include <stdio.h> 

int main()
{ 
  int N;
  
  int sum=0;
  printf("please enter the number :  \n");
  scanf("%d", &N);
  
  printf("the even number till %d are = ",N);
  
  for (int i = 1; i <= N; i++)
  {
    if (i%2==0 )
    {
        printf("%d , ",i);
        sum = sum +i;
        
    }
    
  }
  printf("\n the sum of the s=even numbers is %d  \n",sum);
  
  
 
return 0;
}