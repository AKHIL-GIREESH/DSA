#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *LC;
    struct node *RC;
};

struct node *root = NULL;

void insert(int _val){
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = _val;
    p->LC = NULL;
    p->RC = NULL;
    
    if(root == NULL){
        root = p;
    }else{
        struct node *temp = root,*parent = NULL;
        while(temp!=NULL){
            parent = temp;
            if(temp->data>_val){
                temp = temp->LC;
            }else{
                temp = temp->RC;
            }
        }
        
        if(parent->data > _val){
            parent->LC = p;
        }else{
            parent->RC = p;
        }
    }
    
}

int level(int _val){
    struct node *temp = root;
    int flag=0,level=-1;
    while(temp!=NULL){
        level++;
        if(temp->data == _val){
            flag=1;
            break;
        }else if(temp->data>_val){
            temp = temp->LC;
        }else{
            temp = temp->RC;
        }
    }
    
    if(flag){
        return level;
    }
    
    return -1;
}

void main(){
    
    insert(10);
    insert(5);
    insert(4);
    insert(2);
    insert(1);
    insert(20);
    insert(40);
    insert(15);
    
    printf("%d %d\n",(root->LC)->data,root->RC);
    
    printf("%d\n",level(10));
    printf("%d\n",level(40));
    printf("%d\n",level(1));
    printf("%d\n",level(44));
    printf("%d\n",level(15));
}