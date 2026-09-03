
#include <stdio.h> 

int main()
{ 
    
  int usage_unit,customer_type,cost_per_unit,total;

  float discount,bill;

  printf("enter the amount of units you have used in units: \n");
  scanf(" %d",&usage_unit);

  printf("\n\nplease select what type of customer are you? \nplease select between 1 to 3  \n");
  printf("\n1.residential user \n2.commercial user \n3.industrial user  \n");

  scanf("%d", &customer_type);

  switch (customer_type)
  {
  case 1:
    /* residential  */
    break;
  
  case 2:
    /* commercial  */
    break;
  
  case 3:
    /* industrial  */
    break;
  
  default:printf("sorry you didnt choose between 1 to 3.please enter valid input  \n");
  
    break;
  }
  

  
  
  
  
 
return 0;
}