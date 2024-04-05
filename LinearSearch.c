#include <stdio.h>
#include <stdlib.h>

void linearSearch(int key, int a[100], int size)
{
    int flag = 0, i;
    for (i = 0; i < size; i++)
    {
        if (a[i] == key)
        {
            printf("\n Element %d found at %d.", a[i], i + 1);
            flag = 1;
            break;
        }
    } // end of for
    if (flag == 0)
    {
        printf("\n Element not found in the List!!");
    }
} // end of linearSearch

int main()
{
    int size, choice, i, a[100], key;

    printf("\n Enter the number of elements you want in array :");
    scanf("%d", &size);
    if (0 < size <= 100)
    {
        printf("\n Enter the elements of the array :");
        for (i = 0; i < size; i++)
        {
            printf("\n a[%d] : ", i);
            scanf("%d", &a[i]);
        } // end of for
        while (1)
        {
            printf("\n1 - Display Array\n2 - Do a Linear search\n3 - exit\n Enter your choice:");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                printf("\n The array is :");
                printf("\n{");
                for (i = 0; i < size; i++)
                {
                    printf(" %d ", a[i]);
                }
                printf(" }");
                break;
            case 2:
                printf("\n Enter an element to search :");
                scanf("%d", &key);
                linearSearch(key, a, size);
                break;
            case 0:
                exit(0);
            default:
                printf("\nInvalid input!!");
                break;
            } // end of switch
        }// end of while
    }// end of if
    else
    {
        printf("\n Enter a valid size between 1 to 100");
    }
    return 0;
} // end of main