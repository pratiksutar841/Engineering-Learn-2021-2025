/*2. Design, Develop and Implement a menu driven Program in C for the following operationson 
Doubly Linked List (DLL) of Professor Data with the fields: ID, Name, Branch, Area of 
specialization 
a. Create a DLL stack of N Professor’s Data. 
b. Create a DLL queue of N Professor’s Data 
Display the status of DLL and count the number of nodes in it. */

#include<stdio.h> 
#include<stdlib.h>
void display(); 
void insertfront(); 
void insertrear(); 
void deletefront();
 void deleterear(); 
void node(); 

struct prof
          {
          char name[15],specialisation[15],branch[8]; 
          struct prof *next;
          struct prof *prev;
          };
           struct prof * start=NULL,*second=NULL,*temp;

int main()
    {
       int choice; 
       while(1)
          {
                    printf("MENU \n"); 
                    printf("1.CREATE \n");
                    printf("2.DISPLAY \n"); 
                    printf("3.INSERT FROM FRONT \n");
                    printf("4.INSERT FROM REAR \n"); 
                    printf("5.DELETE FROM FRONT \n");
                    printf("6.DELETE FROM REAR \n");
                    printf("7.COUNT NODES \n");
                    printf("enter your choice \n"); 
                    scanf("%d",&choice);

           switch(choice)
                  {
                    case 1: create();
                    break;
                    case 2: display();
                    break;
                    case 3: insertfront();
                    break;
                    case 4: create();
                    break;
                    case 5: deletefront();
                    break;
                    case 6: deleterear();
                    break;
                    case 7: countnode();
                    break;

                    default: printf("wrong inputs \n"); break;
                   }
          }return 0;
     }

void create()
{
          struct prof *newprof;
          newprof = (struct prof*)malloc(sizeof(struct prof));
          if (newprof==NULL)
                    {
                    printf("out of memory"); 
                    exit(0);
                    }
                    printf("enter prof name \n"); 
                    scanf("%s",newprof->name); 
                    printf("enter prof specialisation \n"); 
                    scanf("%s",newprof->specialisation);
                    printf("enter prof branch \n"); 
                    scanf("%s",newprof->branch);

          if(start==NULL)
                    {
                    temp=start=newprof; 
                    temp->next=NULL; 
                    temp->prev=NULL;
                    }
          else
                    {
                    temp->next=newprof;
                    newprof->prev=temp; 
                    temp=newprof;
                    temp->next=NULL;
                    }

}


void display()
    {
          struct prof *ptr; 

          if (start==NULL)
            {
              printf("list is empty");
              return;
            }
          else
            {
               ptr=start; 
               printf("the elements are \n");
               while(ptr!=NULL)
                    {
                     printf("%s\n",ptr->name); 
                     printf("%s\n",ptr->specialisation); 
                     printf("%s\n",ptr->branch); 
                     ptr=ptr->next;
                    }
            }
    }

void insertfront()
{

struct prof *newprof;
newprof = (struct prof*)malloc(sizeof(struct prof)); 
if (newprof==NULL)
{
printf("out of memory"); 
exit(0);
}
printf("enter students name \n"); 
scanf("%s",newprof->name); 
printf("enter students usn \n"); 
scanf("%s",newprof->specialisation); 
printf("enter students branch \n");
 scanf("%s",newprof->branch);
if(start==NULL)
{

temp=start=newprof; 
temp->next=NULL; 
temp->prev=NULL;
}
else
{
 
newprof->prev=NULL; 
newprof->next=start; 
start->prev=newprof; 
start=newprof;

}

}


void deletefront()
 {
   if(start==NULL)
     {
       printf("list is empty"); 
       return;
     }
   else
     {
      start=start->next; 
      free(start->prev); 
      start->prev=NULL;
     }
  }
  

void deleterear()
          {
                    struct prof *temp;
                    temp=start;

                              while(temp->next!=NULL)
                              {
                              temp=temp->next;
                              }
          if(start==NULL)
                    {

                    printf("list is empty"); 
                    return;
                    }
          else
          {

                    temp=temp->prev;
                    free(temp->next); 
                    temp->next=NULL;

          }
          }

void countnode()
          {
                    struct prof *temp; 
                    temp=start;
                    int count; 
                    count=0;
                              while(temp!=NULL)
                              {
                              temp=temp->next; 
                              count++;
                              }
          printf("the number of node is %d ",count);
          }
