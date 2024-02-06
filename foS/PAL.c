#include<stdio.h>
#include<stdlib.h>

struct poly{
    int ex;
    int c;
    struct poly *link;
};

struct poly *headM = NULL, *tempM = NULL;

void RESULT(int _ex,int _c){
    struct poly *p = (struct poly *)malloc(sizeof(struct poly));
    p->ex = _ex;
    p->c = _c;
    
    if(headM == NULL){
        headM = p;
        tempM = p;
    }else{
        tempM->link = p;
        tempM = p;
    }
}

struct poly* addPoly(struct poly *a,struct poly *b){
    while(a != NULL && b!=NULL){
        if(a->ex > b->ex){
            RESULT(a->ex,a->c);
            a = a->link;
        }else if(a->ex < b->ex){
            RESULT(b->ex,b->c);
            b = b->link;
        }else{
            RESULT(a->ex,a->c+b->c);
            a = a->link;
            b = b->link;
        }
    }
    
    return headM;
}


struct poly* createPoly(){
    struct poly *head = NULL, *temp = NULL,*ptr = NULL;
    int size,expo,coeff;
    
    printf("Input thr size : ");
    scanf("%d",&size);
    
    for(int i=0;i<size;i++){
        struct poly *p = (struct poly *)malloc(sizeof(struct poly));
        printf("Input the exp & coeff: ");
        scanf("%d%d", &expo,&coeff);
        
        p->ex = expo;
        p->c = coeff;
        p->link = NULL;
        
        if(head == NULL){
            head = p;
            temp = p;
        }else{
            temp->link = p;
            temp=p;
        }
    }
    ptr = head;
    while(ptr!=NULL){
        printf(" %dx%d +",ptr->c,ptr->ex);
        ptr = ptr->link;
    }
    
    return head;
}

void main(){
    struct poly *a = createPoly();
    struct poly *b = createPoly();
    
    struct poly *c = addPoly(a,b);
    
    while(c!=NULL){
        printf(" %dx%d +",c->c,c->ex);
        c = c->link;
    }
}