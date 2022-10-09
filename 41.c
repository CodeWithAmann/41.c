#include <stdio.h>
int main()
{
    int pin, password, change_pin, withdrawal_amount;
    float total_amount, deposit_amount;
    int choice;
    printf("Enter your Account Password :- \n");
    scanf("%d", &password);
    printf("Enter Amount (Rs) to Active your Account :- \n");
    scanf("%f", &total_amount);
    printf("ENTER PIN for conformation :- \n");
    scanf("%d", &pin);
    if (password == pin)
    {
        printf("\n 1. Enter1 for Deposit  2. Enter2 for Withdrawl \n 3. Enter3 for Mini-statement 4. Enter4 for Banking\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter Amount To be deposited :- \n");
            scanf("%f", &deposit_amount);
            float balance_after_deposit = total_amount + deposit_amount;
            printf("Your balance after deposit is :- %0.2f \n", balance_after_deposit);
            break;
        case 2:
            printf("Enter Amount To be withdrawal :- \n");
            scanf("%f", &withdrawal_amount);
            float balance_after_withdrawal = total_amount - withdrawal_amount;
            printf("Your Amount after withdrawling is %0.2f \n", balance_after_withdrawal);
            break;
        case 3:
            printf("Your Balance is Rs:- %0.2f \n", total_amount);
            break;
        case 4:
            printf(" 1. CHANGE PIN  2. MORE ABOUT THIS ATM \n");
            int choice1;
            scanf("%d", &choice1);
            switch (choice1)
            {
            case 1:
                printf("Enter Old PIN :- \n");
                scanf("%d", &password);
                if (password == pin)
                {
                    printf("Enter Your New PIN :- \n");
                    scanf("%d", &change_pin);
                    printf("password change Successfully \n");
                }
                else
                {
                    printf("Password doesn't match \n");
                }
                break;
            case 2:
                printf("This CWA stand for :- Code with Aman \n It is more secure \n ");
                break;
            default:
                printf("YOU have entered invalid input plz try again this process again !! \n");
            }
        }
    }
    else
    {
        printf("YOUR PASSWORD DOESN'T  MATCH plz try again !!");
    }
    return 0;
}
