#include<stdio.h>
#include<stdlib.h>
 int QUE_SIZE=5;
 int *CQ;
 int front=-1,rear=-1;
 void insert(int item);
 void del();
 void display();
 int main()
{
          CQ=malloc(QUE_SIZE*sizeof(int));
          int item;
          int choice;
          do
          {
                    printf("\n\n Circular Queue operation menu\n");
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
          free(CQ);
          return 0;
}
void insert(int item)
{
     if(rear==QUE_SIZE-1||front==rear+1)
     {
          printf("Queue Overflow");
          QUE_SIZE++;
          CQ=(int*)realloc(CQ,sizeof(int));
     }
     else
     {
          if(front==-1)
          {
                    front=rear=0;
          }
          else
          {
                    rear=(rear+1)%QUE_SIZE;
          }
          CQ[rear]=item;
     }

}
void del()
{
          int item;
          if(front==-1)
          {
                    printf("Queue underflow\n");

          }
          else
          {
                    item=CQ[front];
                    CQ[front]='0';
                    if(front==rear)
                    {
                              front=rear=-1;
                    }
                    else
                    {
                              front=(front+1)%QUE_SIZE;
                              printf("Deleted elements is %d\n",item);
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
                              printf("%d\n",CQ[i]);
                    }
          }
}
