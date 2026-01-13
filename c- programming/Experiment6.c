// Write a program to implement linear Queue implementation
#include <stdio.h>
#include <stdlib.h>
#define QUE_size 5
char queue[QUE_size];
int front = -1, rear = -1;
void insert(char items);
void delete();
void display();
int main()
{
          char item;
          int choice;
          do
          {
                    printf("\n\n--------Queue Operation MENU-----------\n");
                    printf("1.Insert\n2.Delete\n3.display\n4.delete\n");
                    printf("-----------------------");
                    printf("\nENTER YOUR CHOICE:\t");
                    scanf("%d", &choice);
                    switch (choice)
                    {
                    case 1:
                              printf("Enter the Queue elemets = ");
                              scanf("%s", &item);
                              insert(item);
                              break;
                    case 2:
                              delete ();
                              break;
                    case 3:
                              display();
                              break;
                    case 4:
                              exit(0);
                              break;
                    default:
                              printf("\nInvalid choice:\n");
                              break;
                    }
          } while (choice != 4);
          return 0;
}
void insert(char item)
{
          if (front == rear + 1)
          {
                    printf("Queue Overflow");
          }
          else
          {
                    rear = rear + 1;
                    queue[rear] = item;
          }
}
void delete()
{
          char item;
          if (front == -1)
          {
                    printf("Queue Overflow");
          }
          else
          {
                    item = queue[front];
                    queue[front] = item;
          }
          if (front == rear)
                    front = rear = -1;
          else
                    front = front + 1;
          printf("Delete elemets is %d", item);
}
void display()
{
          int i;
          if (front == -1)
          {
                    printf("Queue empty");
          }
          else
          {
                    printf("Queue element are = ");
                    for (i = 0; i < QUE_size; i++)
                    {
                              printf("%c\t", queue[i]);
                    }
          }
}
