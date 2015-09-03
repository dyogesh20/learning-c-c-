#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head;
void insert(int d, int n);
void print();
int main()
{

    head=NULL;
    insert(2,1);//2,
    insert(3,2);//2,3
    insert(4,1);//4,2,3
    insert(5,3);//4,2,5,3
    insert(6,3);//4,2,6,5,3
    insert(7,4);//4,2,6,7,5,3
    print();
    //printf("Hello world!\n");
    return 0;
}
void insert(int d,int n)
{

    int i;
    struct node *temp1= malloc(sizeof(struct node));
   temp1->data=d;
   temp1->next=NULL;
   if(n==1)
   {
       temp1->next=head;
       head=temp1;
       printf("the head values is %d\n\n",temp1->next);
   }

     else{ struct node* temp2 =head;
       for (i=0;i<n-2;i++)
       {
           temp2=temp2->next;
       }
       temp1->next=temp2->next;
       temp2->next= temp1;
       printf("the head values is %d\n",temp1->next);
       printf("the head values is %d\n\n",temp2->next);


     }

}
void print()
{
    struct node* temp=head;
    printf("the list is: ");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
