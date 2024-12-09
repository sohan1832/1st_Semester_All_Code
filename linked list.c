#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data ;
    struct Node *next;
    struct Node *pre;
};
typedef struct Node node;
void print_likned_list(node *s1)
{
    node *head = s1;
    while(head != NULL)
    {
        printf("%d\n",head->data);
        head =head-> next;
    }
}
int main()
{
    node *s1;
    node *s2;
    node *s3;
    node *new_node;
    s1=(node*)malloc(sizeof(node));
    s2=(node*)malloc(sizeof(node));
    s3=(node*)malloc(sizeof(node));

    s1->data=10;
    s1->next=s2;
    s1->pre=NULL;

    s2->data=30;
    s2->next=s3;
    s2->pre=s1;

    s3->data=70;
    s3->next=NULL;
    s3->pre=s2;

    print_likned_list(s1);
    printf("\n\n\n");

    s1=(node*)malloc(sizeof(node));
    s2=(node*)malloc(sizeof(node));
    s3=(node*)malloc(sizeof(node));
    new_node=(node*)malloc(sizeof(node));
    s1->data=10;
    s1->next=s2;
    s1->pre=NULL;

    s2->data=30;
    s2->next=new_node;
    s2->pre=s1;

    new_node->data=50;
    new_node->next=s3;
    new_node->pre=s2;

    s3->data=70;
    s3->next=NULL;
    s3->pre=new_node;

    print_likned_list(s1);

}
