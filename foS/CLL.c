#include<stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *head = NULL;

void Display(){
    struct node *ptr = head;
    while(ptr->link!=head){
        printf("%d\t",ptr->data);
        ptr = ptr->link;
    }
    
    printf("%d\n",ptr->data);
}

void IAB(){
    int item;
    struct node *p = (struct node *)malloc(sizeof(struct node));
    printf("Input the data");
    scanf("%d",&item);
    p->data = item;
    
    if(head == NULL){
        p->link = p;
        head = p;
    }else{
        struct node *temp = head;
        while(temp->link!=head){
            temp = temp->link;
        }
        temp->link = p;
        p->link = head;
        head = p;
    }
    
    Display();
}

void IAE(){
    int item;
    struct node *p = (struct node *)malloc(sizeof(struct node));
    printf("Input the data");
    scanf("%d",&item);
    p->data = item;
    p->link = head;
    
    if(head == NULL){
        head = p;
    }else{
        struct node *temp = head;
        while(temp->link != head){
            temp = temp->link;
        }
        temp->link = p;
        p->link = head;
    }
    
    Display();
}

void IAP(){
    int item,pos;
    struct node *p = (struct node *)malloc(sizeof(struct node));
    printf("Input the data");
    scanf("%d",&item);
    p->data = item;
    
    printf("Input the position");
    scanf("%d",&pos);
    
    if(pos == 1){
        if(head == NULL){
        p->link = head;
        head = p;
        }else{
            p->link = head;
            head = p;
        }
    }else{
        struct node *temp = head;
        for(int i=1;i<pos-1;i++){
            temp = temp->link;
        }
        p->link = temp->link;
        temp->link = p;
    }
    
    Display();
}

void DFB(){
    if(head == NULL){
        printf("LL is empty");
    }else if(head->link == head){
        struct node *temp = head;
        head = NULL;
        printf("Removed element is %d\n",temp->data);
        free(temp);
    }else{
        struct node *temp = head;
        struct node *temp1 = head;
        while(temp1->link != head){
            temp1 = temp1->link;
        }
        head = head->link;
        temp1->link = head;
        
        printf("Removed element is %d\n",temp->data);
        free(temp);
    }
    
    Display();
}

void DFE(){
    if(head == NULL){
        printf("LL is empty");
    }else if(head->link == head){
        struct node *temp = head;
        head = NULL;
        printf("Removed element is %d\n",temp->data);
        free(temp);
    }else{
        struct node *temp = head;
        struct node *temp1 = temp->link;
        while(temp1->link != head){
            temp1=temp1->link;
            temp = temp->link;
        }
        temp->link = head;
        printf("Removed element is %d\n",temp1->data);
        free(temp1);
    }
    
    Display();
}

void DFP(){
    int pos;
    printf("Input the position");
    scanf("%d",&pos);
    
    if(pos == 1){
        if(head == NULL){
            printf("LL is empty");
        }else if(head->link == head){
            struct node *temp = head;
            head = NULL;
            printf("Removed element is %d\n",temp->data);
            free(temp);
        }else{
            struct node *temp = head;
            head = head->link;
            printf("Removed element is %d\n",temp->data);
            free(temp);
        }
    }else{
        struct node *temp = head;
        struct node *temp1 = NULL;
        for(int i=1;i<pos-1;i++){
            temp = temp->link;
        }
        
        temp1 = temp->link;
        temp->link = temp1->link;
        printf("Removed element is %d",temp1->data);
        free(temp1);
        
        
    }
    
    Display();
}



void main(){
    int choice,condition=1;
    do{
        printf("\nMenu\n1.Insertion at beginning\n2.Insertion at end\n3.Insertion at any pos\n4.Delete from beginning\n5.Delete from end\n6.Delete from any pos\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1: IAB();
                    break;
            case 2: IAE();
                    break;
            case 3: IAP();
                    break;
            case 4: DFB();
                    break;
            case 5: DFE();
                    break;
            case 6: DFP();
                    break;
            case 7: condition=0;
                    break;
        }
    }while(condition);
    
}