#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10

int stack[MAX_SIZE], top = -1; // top equals to -1 indicates that the stack is empyt

void push(int num)
{
    if (top == MAX_SIZE - 1)
    {
        printf("\nStack Overflow!!");
    }
    else
    {
        top++;
        stack[top] = num;
        printf("number pushed to the stack : %d", num);
    }
} // end of push

void pop()
{
    if (top == -1)
    {
        printf("\n Stack underflow!!");
    }
    else
    {
        printf("\n %d removed from the stack.", stack[top]);
        top--;
    }
} // end of pop

/*
stack -> 
        4     
 top    3    40  1 
        2    30  2
        1    20  3
        0    10  4

peep -> 
enter location 
2
30 

enter location 
1
40

enter location 
4
10
*/

void peep(int num)
{  
    if(num >= 0 && num <MAX_SIZE){
        if (num>(top+1) && num<MAX_SIZE)
        {
            printf("\n No elements at location %d",num);
        }
        else if (num >=0 && num<=(top+1)){
            int i,cnt=1;
            for(i=top;i>=0;i--){ // i = 1
               if(num==cnt){ // 3= 3
                printf("\n Elements found at %d : %d",cnt,stack[i]);
                break;
               } 
               else{
                cnt++;// 3
               }
            }//end of for
        }
    }//end of if 
    else{
        printf("\n Invalid choice!! \n Location is out of bound!!");
    } 
} // end of peep . Peep is used to display a number at particular location

void display()
{
    int i;
    if (top == -1)
    {
        printf("\nStack underFlow!!");
    }
    else
    {
        printf("\nStack:");
        for (i = top; i >= 0; i--)
        {
            printf("\n %d", stack[i]);
        }
    }
    printf("\n TOP is at %d",top);
} // end of display

void peek()
{
    if (top == -1)
    {
        printf("\n Stack Underflow!!");
    }
    else
    {
        printf("\n TOP : %d", stack[top]);
    }
} // end of peek. Peek is to display the top of the stack.

int main()
{
    int choice, num;
    while (1)
    {
        printf("\n1 - Display Stack \n2 - Push \n3 - Pop\n4 - Peek\n5 - Peep\n0 - Exit\n Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            display();
            break;
        case 2:
            printf("\n Enter the number to push :");
            scanf("%d", &num);
            push(num);
            break;
        case 3:
            pop();
            break;
        case 4:
            peek();
            break;
        case 5:
            printf("\n Enter the location to peep:");
            scanf("%d", &num);
            peep(num);
            break;
        default:
            printf("\n Invalid choice!!");
            break;
        } // end of switch
    }     // end of while
    return 0;
} // end of main