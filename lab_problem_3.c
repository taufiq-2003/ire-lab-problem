#include <stdio.h>

int main()
{

  int withdraw;
  int deposit;

  printf(" \nplease enter your account balance  \n ");
  int balance;
  scanf(" %d", &balance);

  if (balance < 0)
  {
    printf("please input positive amount  \n");
  }

  else
  {
    printf("please select what type of transaction you want to do?  \n");
    printf("select from 1 to 3  \n");

    printf("select \n 1. Withdrawal \n 2. Deposit \n 3. Balance Check \n");

    int action;
    scanf("%d", &action);

    switch (action)
    {
    case 1: 

      printf("enter the amount you want to with draw  \n");
      printf("please enter positive amount and multiplication of 500 taka  \n");

      scanf("%d", &withdraw);

     
      if (withdraw > 0)
      {

        if (withdraw < balance)
        {
          
          if (withdraw % 500 == 0)
          {
            printf("here is your %d \nremaining balance is %d  \n", withdraw, balance - withdraw);
          }
        }
        else
        {
          printf("insufficient balance  \n");
        }
      }
      else
      {
        printf("enter positive amount  \n");
      }

      break;


    case 2: 
     
    printf("enter positive amount an multiplication of 100  \n");
    scanf("%d", &deposit);


    if (deposit>0 && deposit%100==0)
    {
      printf("congrats! \nnew balance id %d  \n",balance+deposit);
      
    }
    else
    {
      printf("you did not enter positive or multiplication of 100  \n");
      printf("try again please  \n");
      
      
    }

      break;


    case 3: 
      printf("your acount balance is %d   \n",balance);
      

      break;

    default:
      printf("please select between 1 to 3  \n");

      break;
    }

  } 

  return 0;
}
