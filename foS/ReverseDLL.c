#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *Llink;
    struct node *Rlink;
};

struct node *head = NULL, *tail = NULL;

void Insert(){
    int item;
    
    struct node *p = (struct node *)malloc(sizeof(struct node));
    printf("Input your data : ");
    scanf("%d",&item);
    
    p->data = item;
    p->Rlink = NULL;
    
    if(head == NULL){
        p->Llink = NULL;
        head = p;
        tail = p;
    }else{
        p->Llink = tail;
        tail->Rlink = p;
        tail=p;
    }
    
    struct node *tempf = head;
    while(tempf!=NULL){
        printf("%d\t",tempf->data);
        tempf = tempf->Rlink;
    }
    printf("\n");
    
}

void Reverse(){
    int temp;
    struct node *tempf = head, *tempb = tail;
    while(tempf->Rlink!=tempb){
        printf("%d %d\n",tempf->data,tempb->data);
        temp = tempf->data;
        tempf->data = tempb->data;
        tempb->data = temp;
        
        tempf = tempf->Rlink;
        tempb = tempb->Llink;
        
        if(tempf == tempb){
            break;
        }
    }
    
    
    tempf = head;
    while(tempf!=NULL){
        printf("%d\t",tempf->data);
        tempf = tempf->Rlink;
    }
}

void main(){
    Insert();
    Insert();
    Insert();
    // Insert();
    // Insert();
    // Insert();
    Reverse();
    
}