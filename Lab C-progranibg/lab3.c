/*Design, Develop and Implement a menu driven program in c for the following on STACK of Integer
  (Array Implementation of stack with maximum size MAX)
  1] Push an elements on to stack
  2] pop an element from stack
  3] Demonstrate overflow and underflow situation on stack
  4] Display the status of stack
  5] Exit                                                  */
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int s[MAX];
int top = -1;
int elem, i;
void push(int c);
int pop();
void display();
int main()
{
          int ch;
          while (1)
          {
                    printf("\n\nStack operation\n");
                    printf("1] Push\n2] Pop\n3] Display\n4] Exit\n");
                    printf("\nEnter your choice = " );
                    scanf("%d", &ch);
                    switch (ch)
                    {
                    case 1:   printf("Enter the element to be pushed = ");
                              scanf("%d", &elem);
                              push(elem);
                              break;

                    case 2:   elem = pop();
                              printf("Selected element is %d \n", elem);
                              break;

                    case 3:   display();
                              break;
                    case 4:  exit(0);
                               break;

                    default:
                              printf("\nEnter valid choice\n");
                              break;
                    }
          }
}
void push(int e)
{
          if (top == MAX - 1)
          {
                    printf("Stack overflow");
                    return;
          }
          top++;
          s[top] = e;
}
int pop()
{
          if (top == -1)
          {
                    printf("Stack underflow");
                    return 0;
          }
          elem = s[top];
          {
                    top--;
                    return elem;
          }
}
void display()
{
          if (top == -1)
          {
                    printf("Stack empty\n");
                     return;
          }
          printf("Stack contains are \n");
          for (i = top; i > -1; i--)
          {
                    printf("%d\n", s[i]);
          }
}
