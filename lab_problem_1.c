#include <stdio.h> 

int main()
{ int MAT,PHY,CHE,total;

  float average;

  printf("please enter the numbers from 0 to 100  \n");
  
  printf("please enter the marks on the Mathematics:  \n");
  scanf("%d", &MAT);
  
  if (MAT<0 || MAT>100)
  {
    printf("the number you entered is invalid please start over and give a valid number  \n");
    return 0;
  }
if (MAT<33)
  {
    printf("you have failed the exam mathematics exam \n");
    return 0;
  }  

  
  printf("please enter the marks on the physics:  \n");
  scanf("%d", &PHY);
  
  if (PHY<0 || PHY>100)
  {
    printf("the number you entered is invalid please start over and give a valid number  \n");
    return 0;
  }
if (PHY<33)
  {
    printf("you have failed the physics exam  \n");
    return 0;
  }  
  
  printf("please enter the marks on the chemistry:  \n");
  scanf("%d", &CHE);
  
  if (CHE<0 || CHE>100)
  {
    printf("the number you entered is invalid please start over and give a valid number  \n");
    return 0;
  }
if (CHE<33)
  {
    printf("you have failed the chemistry exam  \n");
    return 0;
  }  


  total = MAT+PHY+CHE;
  average = total/3.00;
  printf("%.2f  \n",average);

  

  if (average >= 80)
  {
    printf("congrats you have obtained A+  \n");
    
  }
  
  else if (average >= 70)
  {
    printf("congrats you have obtained A  \n");
    
  }
  
  else if (average >= 60)
  {
    printf("congrats you have obtained B  \n");
    
  }
  
  else if (average >= 50)
  {
    printf("congrats you have obtained C  \n");
    
  }
  
  else if (average >= 40)
  {
    printf("congrats you have obtained D  \n");
    
  }

  else {
    printf("sorry you have failed the examination  \n");
    
  }

  printf("your obtained average marks : %d  \n",average);
  
  
  

 
return 0;
}