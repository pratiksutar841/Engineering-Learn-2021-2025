//implementation of Queue using LinkedList
#include<stdio.h>
#include<stdlib.h>
struct node
{
          int data;
          struct node*link;
};
typedef struct node* NODE;
NODE start=NULL;
 void insert_rear();
 void delete_front();
 void display();
 int main()
{
      
         
          int choice;
          do
          {
                    printf("\n\n  Queue operation using LL menu\n");
                    printf("1] Insert\n2] Delete\n3] display\n4] exist\n");
                    printf("Enter your choice = ");
                    scanf("%d",&choice);
                    switch(choice)
                    {
                              case 1 : insert_rear();
                                       break;
                              case 2 : delete_front();
                                       break;
                              case 3 : display();
                                       break;
                           
                              default:  printf("Invalid choice\n");
                    }
          }
          while(choice!=4);
        
          return 0;
}
void insert_rear()
{
     int data;
     NODE temp,q;
     printf("Enetr data to insert");
     temp=(struct node*)malloc(sizeof(struct node));
     scanf("%d",&data);
     temp->data=data;
     temp->link=NULL;
     if(start==NULL)
     {
          start=temp;
     }
     else
     {
          q=start;
          while(q->next!=NULL)
          q=q->next;
          q->next=temp;
     }

}
void delete_front()
{
         NODE temp;
         if(start==NULL)
         {
          printf("Queue underflow");
         }
         else
         {
          temp=start;
          start=start->next;
          printf("Deleted item is %d\n",temp->data);
          free(temp);
         }
}
void display()
{
          int count=0;
          NODE temp;
          temp=start;
          printf("Queue state is")
          while(temp!=NULL)
          {
            printf("%d",temp->data);
            temp=temp->link;
            count++;
          }
          printf("%d",count);
}
