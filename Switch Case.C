#include<stdio.h>
int main()
{
  printf("select a food item:\n1.french fries\n.Rs 99\n2.burger\n.Rs 129\n3.sandwich\n.Rs 149\n4.pasta\n.Rs 179\n5.pizza\n.Rs 239");
  int choice=0;
  scanf("%d",&choice);
  switch(choice)
{
  case 1:
     printf("french fries");
     printf("\nRs 99");
     break;
  case 2:
     printf("burger");
     printf("\nRs 129");
     break;
  case 3:
     printf("sandwich");
     printf("\nRs 149");
     break;
  case 4:
     printf("pasta");
     printf("\nRs 179");
     break;
  case 5:	
     printf("pizza");
     printf("\nRs 239");
     break;
  default : 
     printf("invalid choice");
}
}
