#include <stdio.h>

void printBinary(unsigned int value)
{
    for (int i = 31; i >= 0; i--)
    {
        if (value & (1U << i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    
    printf("\n");
}

int main()
{
    unsigned int value = 0;
    int choice;

    do
    {
        printf("\n1. Set a value\n");
        printf("2. Show value in decimal\n");
        printf("3. Show value in binary\n");
        printf("4. Set a bit\n");
        printf("5. Clear a bit\n");
        printf("6. Toggle a bit\n");
        printf("7. Check a bit\n");
        printf("8. Exit\n");




        printf("Choose: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("Enter the value you want: ");
            scanf("%u", &value);
            break;
        }
        case 2:
        {
            printf("The value is %u in decimal.\n", value);
            break;
        }
        case 3:
        {
            printBinary(value);
            break;
        }
        case 4:
        {   
            int bit;

            printf("Which bit do you want to set? ");
            scanf("%d", &bit);

            if (bit < 0 || bit > 31)
            {
                printf("Bit must be between 0 and 31. \n");
                break;
            }
            
            value|= (1U << bit);

            printf("Bit %d was set. \n", bit);
            break;
        }     
        case 5:
        {
            int bit;
         
            printf("Which bit do you want to clear? ");
            scanf("%d", &bit);

            if (bit<0 || bit>31)
            {
                printf("Bit must be between 0 and 31. \n");
                break;
            }
            

            value &= ~(1U << bit);

            printf("Bit %d was cleared. \n", bit);
            break;
        }
        case 6:
        {
            int bit; 
            printf("Which bit do you want to toggle?");
            scanf("%d", &bit);

            if (bit<0 || bit >31)
            {
                printf("Bit must be between 0 and 31. \n");
                break;
            }
            value ^= (1U << bit);

            printf("Bit %d was toggled. \n", bit);
            break;
        }
        case 7:
        {
            int bit; 
            printf("Which bit do you want to check? ");
            scanf("%d", &bit);

            if (bit < 0 || bit > 31)
            {
                printf("Bit must be between 0 and 31. \n");
                break;
            }
            
            if (value & (1U << bit))
            {
                printf("Bit %d is set to 1. \n", bit);
            }
            else
            {
                printf("Bit %d is set to 0. \n", bit);
            }
            

            break;
        }

        case 8:
        {
            printf("Exiting...\n");
            break;
        }
        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 8);
    
    return 0;
}
