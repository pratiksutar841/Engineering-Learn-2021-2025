// 5. Singly Linked List (SLL) of Integer Data
// a.	Create a SLL stack of N integer.
// b.	Display of SLL
// c.	Linear search.
// d.	Create a SLL queue of N Students
// e.	Data Concatenation of two SLL of integers. 

#include<stdlib.h> #include <stdio.h>

void create(); void display();
voidinsert_front(); voiddelete_front(); voiddelete_rear(); void stack();
void queue(); void search();
voidcreate_secondll(); voidconcat():

struct node
{
int info;
struct node *next;
};
struct node *start=NULL, *second =NULL,*temp; int main()
{
int choice; while(1){

printf("\n MENU \n"); printf("\n 1.Create	\n "); printf("\n 2.Display		\n"); printf("\n 3.Insert front	\n"); printf("\n 4.delete front	\n"); printf("\n 5.delete rear \n"); printf("\n 6.search \n");
printf("\n 7.createsecond linked list \n"); printf("\n 8.concat \n");
printf("\n 9.stack \n"); printf("\n 10.queue \n");

printf("Enter your choice:"); scanf("%d",&choice);
switch(choice)
{
case 1: create();
break
case 2:display(); break;
 
case 3: insert_front();break;
 

 




 
case 4: delete_front(); break;

 
case 5: delete_rear(); break;
 
case 6: search(); break;
 


 
case 7: create_secondll(); break;
 


 
case 8: concat(); break;
 


 

case 9: stack();break;
case 10: queue();break;

default: printf("n Wrong Choice:n");
break;
}
}
return 0;
}

void create()
{
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));

if(newnode==NULL)
{
printf("nOut of Memory Space:"); exit(0);
}
printf("nEnter the data value for the node:"); scanf("%d",&newnode->info);


if(start==NULL)
{
temp=start=newnode;
}
else
{
temp->next=newnode; temp=newnode;


temp->next=NULL;


}
}

voidcreate_secondll()
{
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));

if(newnode==NULL)
{
printf("nOut of Memory Space:"); exit(0);
}
printf("nEnter the data value for the node:"); scanf("%d",&newnode->info);
if(second==NULL) 
{

}
else
{
 

temp=second=newnode;
 
temp->next=newnode; temp=newnode;
temp->next=NULL;

}

}
void display()
{
struct node *ptr;
if(start==NULL)
{
printf("nList is empty:"); return;
}
else
{
ptr=start;
printf("The List elements are:"); while(ptr!=NULL)
{
printf("%d",ptr->info ); ptr=ptr->next ;
}
}
}

voidinsert_front()
{

struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node)); if(newnode==NULL)
{
printf("nOut of Memory Space:"); exit(0);
}
printf("nEnter the data value for the node:"); scanf("%d",&newnode->info);
 

newnode->next=start; start=newnode;

}


voiddelete_front()
{
struct node * first; first=start;
struct node *ptr;
if(start==NULL)
{
printf("nList is empty:"); return;
}
else
{
ptr=first=start; ptr=ptr->next;
start=ptr; free(first);
}
}

voiddelete_rear()
{
struct node * prev,*cur; prev=cur=start;

while(cur->next!=NULL)
{
prev=cur; cur=cur->next ;
}
prev->next=NULL;
free(cur);


}

void search()
{

struct node *p;
 
int key;
printf("enter the key"); scanf("%d",&key); printf("key is %d",key); if(start == NULL) printf("\nNo student data\n"); else
{
p=start; while(p!=NULL)
{
printf("\n%s\t%s\t\t%s\t%d\t%s", p->info);

if(key == p->info)
{
printf("found"); break;
}
else
{
p=p->next;
}

}
}

voidconcat()
{
struct node *p = start; while (p->next != NULL)
{
p = p->next;
}
p->next = second;

}


void stack()
{ int choice; while(1){
printf("\n MENU \n"); printf("\n 1.Insert front	\n"); printf("\n 2.delete front	\n"); printf("\n 3. display \n"); printf("Enter your choice:");
 
scanf("%d",&choice);
switch(choice)
{
case 1:insert_front();break; case 2:delete_front();break; case 3:display(); break;
default: printf("wrong choice");

}}}

void queue()
{ int choice; while(1){
printf("\n MENU \n"); printf("\n 1.Insert rear	\n"); printf("\n 2.delete front		\n"); printf("\n 3. display \n");


printf("Enter your choice:"); scanf("%d",&choice);
switch(choice)
{
case 1:create();break;
case 2:delete_front();break; case 3:display(); break;
default: printf("wrong choice");
}}}
