// Movie Ticket Pricing System: Write a C program that calculates the total movie ticket price based on the customer's age, movie type, and number of tickets. The movie type should be selected using switch, where 1 represents a Regular Movie costing 300 per ticket, 2 represents a 3D Movie costing 450 per ticket, and 3 represents an IMAX Movie costing 600 per ticket. Apply age-based discounts using if, else if, and else: children aged below 12 receive a 50% discount, students aged 12–22 receive a 20% discount, adults aged 23–59 pay the regular price, and senior citizens aged 60 or above receive a 30% discount. If more than 5 tickets are purchased, apply an additional 10% discount to the final amount. The program should also check for invalid ages, ticket quantities, and movie types and display appropriate error messages.




#include <stdio.h> 

int main()
{ 
    int age;
    int number_of_tickets;
    float discount;
    int service;
    float ticket_price;

    printf("1 \n\nselect a service  \n\n");
    printf(" 1. Regular Movie costing 300 per ticket \n 2.3D Movie costing 450 per ticket \n 3. IMAX Movie costing 600 per ticket\n ");
    scanf(" %d", &service);
    printf("please enter your age:  \n");
    scanf("%d", &age);
    printf("number of tickets  \n");
    scanf("%d", &number_of_tickets);
    
    
    
    
    

    switch (service)
    {
    case 1:

    ticket_price=300;

    if (age<12 )
    {
      
      if (number_of_tickets>5)
      {
        printf("congrats you get get 60%% discount  \n");
        discount= 0.6;
      }
      else
      {
        printf("congrats you get get 50%% discount  \n");
        discount= 0.5;
      }
      
    }
    else if (age>12 && age<23)
    {
      if (number_of_tickets>5)
      {
        printf("congrats you get get 30%% discount  \n");
        discount= 0.3;
      }
      else
      {
        printf("congrats you get get 20%% discount  \n");
        discount= 0.2;
      }
    }

    else if (age>22 && age <59)
    {
      if (number_of_tickets>5)
      {
        printf("congrats you get get 10%% discount  \n");
        discount= 0.1;
        
      }
      else
      {
        printf("congrats you get get 10%% discount  \n");
        discount= 0.1;
      }
    }

    else if (age>59)
    {
      if (number_of_tickets>5)
      {
        printf("congrats you get get 40%% discount  \n");
        discount= 0.4;
        
      }
      else
      {
        printf("congrats you get get 10%% discount  \n");
        discount= 0.4;
      }
    }
    
    
    
    printf("pay %.2f   \n", (ticket_price*number_of_tickets) - (ticket_price*number_of_tickets*discount) );
    
      
      break;
    
    case 2:
      
    ticket_price=400;

    if (age<12 )
    {
      
      if (number_of_tickets>5)
      {
        printf("congrats you get get 60%% discount  \n");
        discount= 0.6;
      }
      else
      {
        printf("congrats you get get 50%% discount  \n");
        discount= 0.5;
      }
      
    }
    else if (age>12 && age<23)
    {
      if (number_of_tickets>5)
      {
        printf("congrats you get get 30%% discount  \n");
        discount= 0.3;
      }
      else
      {
        printf("congrats you get get 20%% discount  \n");
        discount= 0.2;
      }
    }

    else if (age>22 && age <59)
    {
      if (number_of_tickets>5)
      {
        printf("congrats you get get 10%% discount  \n");
        discount= 0.1;
        
      }
      else
      {
        printf("congrats you get get 10%% discount  \n");
        discount= 0.1;
      }
    }

    else if (age>59)
    {
      if (number_of_tickets>5)
      {
        printf("congrats you get get 40%% discount  \n");
        discount= 0.4;
        
      }
      else
      {
        printf("congrats you get get 10%% discount  \n");
        discount= 0.4;
      }
    }
    
    
    
    printf("pay %.2f   \n", (ticket_price*number_of_tickets) - (ticket_price*number_of_tickets*discount) );
    
    

      break;
    
    case 3:
    ticket_price=600;

    if (age<12 )
    {
      
      if (number_of_tickets>5)
      {
        printf("congrats you get get 60%% discount  \n");
        discount= 0.6;
      }
      else
      {
        printf("congrats you get get 50%% discount  \n");
        discount= 0.5;
      }
      
    }
    else if (age>12 && age<23)
    {
      if (number_of_tickets>5)
      {
        printf("congrats you get get 30%% discount  \n");
        discount= 0.3;
      }
      else
      {
        printf("congrats you get get 20%% discount  \n");
        discount= 0.2;
      }
    }

    else if (age>22 && age <59)
    {
      if (number_of_tickets>5)
      {
        printf("congrats you get get 10%% discount  \n");
        discount= 0.1;
        
      }
      else
      {
        printf("congrats you get get 10%% discount  \n");
        discount= 0.1;
      }
    }

    else if (age>59)
    {
      if (number_of_tickets>5)
      {
        printf("congrats you get get 40%% discount  \n");
        discount= 0.4;
        
      }
      else
      {
        printf("congrats you get get 10%% discount  \n");
        discount= 0.4;
      }
    }
    
    
    
    printf("pay %.2f   \n", (ticket_price*number_of_tickets) - (ticket_price*number_of_tickets*discount) );
    
    
    



      break;
    
    default: printf("please select from 1 to 3  \n");
    
      break;
    }
    


    
    
 
return 0;
}