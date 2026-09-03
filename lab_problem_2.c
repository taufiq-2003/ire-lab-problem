
#include <stdio.h> 

int main()
{ 
    
  int usage_unit,customer_type,cost_per_unit,total_cost;

  float discount,bill;

  printf("\n\nenter the amount of units you have used in units: \n");
  scanf(" %d",&usage_unit);

  printf("\n\nplease select what type of customer are you? \nplease select between 1 to 3  \n");
  printf("\n1.residential user \n2.commercial user \n3.industrial user  \n");

  scanf("%d", &customer_type);

  switch (customer_type)
  {
  case 1:
    if (usage_unit<100)
    {
      total_cost = usage_unit*5;
    }
    else if (usage_unit<300)
    {
      total_cost= 100*5 + (usage_unit-100)*7;
    }
    else {
      total_cost= 100*5 + 200*7 + (usage_unit-300)*10;
    }


    if (total_cost>2000)
    {
      printf("your usage %d   \n",total_cost);
      
      printf("you will get 10 percent discount for using over 2000 tk  \n");
      bill =total_cost- total_cost*0.1;
      printf("the Bill: %.2f  \n",bill);
      
    }
    else
    {
     printf("your usage %d   \n",total_cost);
      
      
      bill =total_cost;
      printf("the Bill: %.2f  \n",bill);
    }
    
    
    
    break;
  
  case 2:
  if (usage_unit<100)
    {
      total_cost = usage_unit*5;
    }
    else if (usage_unit<300)
    {
      total_cost= 100*5 + (usage_unit-100)*7;
    }
    else {
      total_cost= 100*5 + 200*7 + (usage_unit-300)*10;
    }


    printf("\nyour usage %d   \n",total_cost);
      
      printf("as a commercial user wou will receive 5 percent surcharge.  \n");
      bill =total_cost+ total_cost*0.05;
      printf("your electricity Bill: %.2f  \n",bill);


    break;
  
  case 3:
    if (usage_unit<100)
    {
      total_cost = usage_unit*5;
    }
    else if (usage_unit<300)
    {
      total_cost= 100*5 + (usage_unit-100)*7;
    }
    else {
      total_cost= 100*5 + 200*7 + (usage_unit-300)*10;
    }


    printf("\nyour usage %d   \n",total_cost);
      
      printf("as a industrial user wou will receive 5 percent surcharge.  \n");
      bill =total_cost+ total_cost*0.1;
      printf("your electricity Bill: %.2f  \n",bill);
    break;
  
  default:printf("sorry you didnt choose between 1 to 3.please enter valid input  \n");
  
    break;
  }
  

  
  
  
  
 
return 0;
}