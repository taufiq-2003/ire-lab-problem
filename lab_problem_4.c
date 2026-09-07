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