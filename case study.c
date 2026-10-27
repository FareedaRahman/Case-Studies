#include<stdio.h>
void main() 
{
 char choice;
 float balance=0.0, amount;
 printf("enter current balance:\n");
 scanf("%f",&balance);
 printf("i for inquiry\n");
 printf("w for withdrawal\n");
 printf("d for deposit \n");
 printf("enter your choice:");
 scanf(" %c",&choice);
 switch (choice) {
  case 'i': 
    printf("current balance:%f",balance);
      break;
  case 'w':
    printf("enter amount to be withdrawn:\n");
    scanf("%f",&amount);
    if (amount<=balance && amount>0) 
     {
        balance -=amount;
        printf("Transaction successful!\n");
        printf("Remaining balance:%f",balance);
     }
    else
     {
       printf("Insufficient balance");  
     }
       break;
   case 'd':
     printf("Enter amount to be deposited:\n");
     scanf("%f",&amount);
     if(amount>0) 
     {
      balance+=amount;
      printf("Deposit successful!");
      printf("Updated balance:%f",balance);
     }
    else
     {
      printf("Invalid deposit amount");
     }
       break;
        
   default :
       printf("invalid option");
   }
    }
      
        