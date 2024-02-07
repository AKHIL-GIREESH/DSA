#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *head = NULL;

void Insert(){
    int item;
    
    struct node *p = (struct node *)malloc(sizeof(struct node));
    printf("Input your data : ");
    scanf("%d",&item);
    
    p->data = item;
    
    if(head == NULL){
        p->link = NULL;
        head = p;
    }else{
        p->link = head;
        head = p;
    }
    
    struct node *tempf = head;
    while(tempf!=NULL){
        printf("%d\t",tempf->data);
        tempf = tempf->link;
    }
    printf("\n");
    
}

void Reverse(){
    int temp;
    struct node *current = head, *prev = NULL,*next = head->link;
    while(current != NULL){
        current->link = prev;
        prev = current;
        current = next;
        next = next!=NULL?next->link:NULL;
    }
    head = prev;
    current = head;
    while(current!=NULL){
        printf("%d\t",current->data);
        current = current->link;
    }
}

void main(){
    Insert();
    Insert();
    Insert();
    Reverse();
    
}