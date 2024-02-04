#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *LC;
    struct node *RC;
};

struct node *root = NULL;

void Insert(int item){
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = item;
    p->LC = NULL;
    p->RC = NULL;
    if(root == NULL){
        root = p;
    }else{
        struct node *ptr = root;
        struct node *parent = NULL;
        while(ptr!=NULL){
            parent = ptr;
            if(ptr->data>item){
                ptr = ptr->LC;
            }else{
                ptr = ptr->RC;
            }
        }
        
        if(parent->data>item){
            parent->LC = p;
        }else{
            parent->RC = p;
        }
    }
}

void Search(int item){
    int flag=0;
    struct node *ptr = root;
    while(ptr!=NULL){
        if(ptr->data>item){
            ptr = ptr->LC;
        }else if(ptr->data<item){
            ptr = ptr->RC;
        }else{
            flag=1;
            break;
        }
    }
    
    if(flag){
        printf("Found");
    }else{
        printf("Not Found");
    }
}

struct node *SUCCESSOR(struct node *ptr1){
    ptr1 = ptr1->RC;
    while(ptr1->LC != NULL){
        ptr1 = ptr1->LC;
    }
    
    return ptr1;
}

void Delete(int item){
    int flag=0;
    struct node *ptr = root;
    struct node *parent = NULL;
    while(ptr!=NULL){
        if(ptr->data>item){
            parent = ptr;
            ptr = ptr->LC;
        }else if(ptr->data<item){
            parent = ptr;
            ptr = ptr->RC;
        }else{
            flag=1;
            break;
        }
    }
    
    if(!flag){
        printf("Not Found");
    }else{
        printf("Found");
        if(ptr->LC == NULL && ptr->RC == NULL){
            if(parent->LC == ptr){
                parent->LC = NULL;
            }else{
                parent->RC = NULL;
            }
        }else if(ptr->LC != NULL && ptr->RC != NULL){
            struct node *ptr1 = SUCCESSOR(ptr);
            item = ptr1->data;
            Delete(ptr1->data);
            ptr->data = item;
        }
    }
}

void main(){
    int choice,condition=1;
    
    do{
        printf("1.Insert\n2.Search\n3.Delete\nInput your choice : ");
        scanf("%d",&choice);
        
        Insert(10);
        Search(10);
        printf("%d",root->data);
        Insert(5);
        Search(5);
        Insert(7);
        Insert(2);
        Delete(5);
        
        // switch(choice){
        //     case 1:Insert();
        //             break;
        //     case 2:Search();
        //             break;
        //     case 3: Delete();
        //             break;
        //     case 4: condition=0;
        //             break;
        // }
    }while(!condition);
    
}