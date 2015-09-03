#include <stdio.h>
#include <stdlib.h>
struct pg_table {
int data;
struct pg_table* next;

};
struct pg_table* head;
void insert1(int x);
void print();
int main()
{
    int i,x,n;
    printf("how many element want to add in linked list?\n");
    scanf("%d",&n);
    head=NULL;
    for(i=0;i<n;i++)
    {
        printf("Enter a element \n");
        scanf("%d",&x);
        insert1(x);
        print();
          printf("\n");
    }

    printf("\n");
    return 0;
}
void insert1(int x)
{
    struct pg_table* temp=malloc(sizeof(struct pg_table));
    temp->data=x;
    temp->next=head;
    head=temp;
}
void print()
{
    struct pg_table* temp=head;
    printf("the list is: ");
    while(temp!=NULL)
    {
        printf("%d , ",temp->data);
        temp=temp->next;
    }
}
