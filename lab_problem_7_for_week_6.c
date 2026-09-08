// Write a C program that takes an integer N from the user and uses a for loop to find and display all the numbers between 1 and N that are divisible by both 3 and 5. The program should also calculate and display the sum of these numbers.

#include  <stdio.h> 
int main()
{ 
    int N;
    int sum =0;
    printf("please enter the number : \n");
    scanf("%d", &N);


    printf("the number thats divisible by both 3 and 5 are =");
    for ( int i =1; i<=N ; i++){

      if (i%3 ==0  && i%5 ==0 )
      {
        printf("%d ,",i);
        sum= sum +i;
      }
      


    }
    printf(" \nthe sum of the devisable number is %d  \n",sum);
    
 
return 0;
}