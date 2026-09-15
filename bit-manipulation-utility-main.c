#include <stdio.h>

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
            /* code */
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 4);
    

}