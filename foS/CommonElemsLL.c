#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *head1 = NULL,*head2 = NULL,*headM = NULL;


void LL1(){
    int item;
    struct node *p = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element : ");
    scanf("%d",&item);
    p->data = item;
    if(head1 == NULL){
        p->link = NULL;
        head1 = p;
    }else{
        p->link = head1;
        head1 = p;
    }
}

void LL2(){
    int item;
    struct node *p = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element : ");
    scanf("%d",&item);
    p->data = item;
    if(head2 == NULL){
        p->link = NULL;
        head2 = p;
    }else{
        p->link = head2;
        head2 = p;
    }
}

void LL3(){
    struct node *ptr1 = head1, *ptr2 = NULL;
    
    while(ptr1 != NULL){
        ptr2 = head2;
        //printf("%d\n",ptr1->data);
        while(ptr2 != NULL){
            if(ptr1->data == ptr2->data){
               //printf("Data : %d\t",ptr2->data);
                struct node *p = (struct node *)malloc(sizeof(struct node));
                p->data = ptr1->data;
                if(headM == NULL){
                    p->link = NULL;
                    headM = p;
                }else{
                    p->link = headM;
                    headM = p;
                }
            }
            ptr2 = ptr2->link;
        }
        ptr1 = ptr1->link;
    }
    
    ptr1 = headM;
    while(ptr1 != NULL){
       printf("%d",ptr1->data);
        ptr1 = ptr1->link;
    }
    
}

void main(){
    int choice,condition=1;
    do{
        printf("Menu\n1.Input into LL1\n2.Input into LL2\n3.Common elements\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1: LL1();
                    break;
            
            case 2: LL2();
                    break;
            
            case 3: LL3();
                    break;
                    
            case 4: condition=0;
                    break;
        }
    }while(condition);
    
}