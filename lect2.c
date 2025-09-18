#include<stdio.h>
int main()
{
    // int a;
    // printf("enter day number(1-7):");
    // scanf("%d",&a);
    // switch (a)
    // {
    // case 1:printf("MONDAY");
    //     break;
    // case 2:printf("TUESDAY");
    //     break;
    // case 3:printf("WEDNESDAY");
    //     break;
    // case 4:printf("THURSDAY");
    //     break;
    // case 5:printf("FRIDAY");
    //     break;
    // case 6:printf("SATURDAY");
    //     break;
    // case 7:printf("SUNDAY");
    //     break;
    // default:printf("INVALID DAY\n");
    // } 


    int a;
    float inr;
    printf("1. INR to USD\n2. INR to EUR\n3. INR to YEN\n");
    printf("Enter your choice:");
    scanf("%d",&a);
    printf("Enter amount in INR:");
    scanf("%f",&inr);
    switch(a)
    {
      case 1:printf("USD=%.2f\n",inr*0.012);
             break;
      case 2:printf("EUR=%.2f\n",inr*0.011);
             break;
      case 3:printf("YEN=%.2f\n",inr*1.73);
             break;
      default:printf("INVALID CHOICE\n");
    }
 


    // int choice;
    // float balance = 1000.0; 
    // float amount;

    // while (1)
    //  {
    //     printf("\n===== Mini ATM =====\n");
    //     printf("1. Check Balance\n");
    //     printf("2. Deposit Money\n");
    //     printf("3. Withdraw Money\n");
    //     printf("4. Exit\n");
    //     printf("Enter your choice: ");
    //     scanf("%d", &choice);

    //     switch (choice) 
    //     {
    //         case 1:
    //             printf("Your current balance is: %.2f\n", balance);
    //             break;
    //         case 2:
    //             printf("Enter amount to deposit: ");
    //             scanf("%f", &amount);
    //             if (amount > 0) 
    //             {
    //                 balance += amount;
    //                 printf("Amount deposited successfully!\n");
    //             }
    //             else 
    //             {
    //                 printf("Invalid deposit amount.\n");
    //             }
    //             break;
    //         case 3:
    //             printf("Enter amount to withdraw: ");
    //             scanf("%f", &amount);
    //             if (amount > 0 && amount <= balance)
    //             {
    //                 balance -= amount;
    //                 printf("Please collect your cash.\n");
    //             }
    //             else
    //             {
    //                 printf("Insufficient balance or invalid amount.\n");
    //             }
    //             break;
    //         case 4:
    //             printf("Thank you for using the ATM. Goodbye!\n");
    //             return 0;
    //         default:
    //             printf("Invalid choice. Please try again.\n");
    //     }
    // }






return 0;    
}