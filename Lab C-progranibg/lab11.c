// C program for normal  Linear Queue Implementation
#include<stdio.h>
#include<stdlib.h>
#define QUE_SIZE 5
char QUEUE[QUE_SIZE];
int front=-1,rear=-1;
void insert(char item);
void del();
void display();
int main()
{
          char item;
          int choice;
          do
          {
                    printf("\n\nQueue operation menu\n");
                    printf("1] Insert\n2] Delete\n3] display\n4] exist\n");
                    printf("Enter your choice = ");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                              case 1 : printf("Enter the Queue elements = ");
                                       scanf("%s",&item);
                                       insert(item);
                                       break;
                              case 2 : del();
                                       break;
                              case 3 : display();
                                       break;
                           
                              default:  printf("Invalid choice\n");
                    }
          }
          while(choice!=4);
          return 0;
}
void insert(char item)
{
     if(front==rear+1)
     {
          printf("Queue Overflow");
     }
     else
     {
          if(front==-1)
          {
                    front=rear=0;
          }
          else
          {
                    rear=rear+1;
          }
          QUEUE[rear]=item;
     }

}
void del()
{
          char item;
          if(front==-1)
          {
                    printf("Queue underflow\n");

          }
          else
          {
                    item=QUEUE[front];
                    QUEUE[front]='-';
                    if(front==rear)
                    {
                              front=rear=-1;
                    }
                    else
                    {
                              front=front+1;
                              printf("Deleted elements id %d\n",item);
                    }
          }
}
void display()
{
          int i;
          if(front==-1)
          {
                    printf("Queue Empty");
          }
          else
          {
                    printf("Queue elements are\n");
                    for(i=0;i<QUE_SIZE;i++)
                    {
                              printf("%c\n",QUEUE[i]);
                    }
          }
}

