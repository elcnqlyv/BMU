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
        printf("4. Exit\n");

        printf("Choose: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value you want: ");
            scanf("%u", &value);
            break;
        case 2:
            printf("The value is %u in decimal.", value);
            break;
        case 3:
            printBinary(value);
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 4);
    
    return 0;
}