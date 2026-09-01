// Simple ATM Transaction: Write a C program that simulates a simple ATM system by taking the user's account balance, transaction type, and transaction amount as input. The transaction type should be selected using switch, where 1 represents Withdrawal, 2 represents Deposit, and 3 represents Balance Check. For withdrawal, the program should check whether the requested amount is positive, whether sufficient balance is available, and whether the amount is a multiple of 500; if all conditions are satisfied, complete the withdrawal. For deposit, the amount must be positive and a multiple of 100. For balance checking, simply display the current balance. The program should display suitable messages for insufficient balance, invalid amounts, and invalid transaction types.

// user's account balance, transaction type, and transaction amount  ok

// transaction type should be selected using switch ok
// where 1 represents Withdrawal, 2 represents Deposit, and 3 represents Balance Check ok

//  check whether the requested amount is positive
// whether sufficient balance is available, and whether the amount is a multiple of 500

// For deposit, the amount must be positive and a multiple of 100

// For balance checking, simply display the current balance.

// The program should display suitable messages for insufficient balance, invalid amounts, and invalid transaction types.

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
    case 1: // withdraw

      printf("enter the amount you want to with draw  \n");
      printf("please enter positive amount and multiplication of 500 taka  \n");

      scanf("%d", &withdraw);

      // check amount positive
      if (withdraw > 0)
      {

        // check sufficient amount  condition
        if (withdraw < balance)
        {
          // multi of 500
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





    case 2: // deposit
     
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




    case 3: // check balance
      printf("your acount balance is %d   \n",balance);
      

      break;

    default:
      printf("please select between 1 to 3  \n");

      break;
    }

  } // end of else

  return 0;
}
