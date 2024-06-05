#include<stdio.h>
#include <stdlib.h>

struct node{
	int e;
	int c;
	struct node *link;
};

struct node *headR = NULL,*tempR = NULL ,*a,*b,*c;


struct node result(int exp,int coeff){
	if(headR == NULL){
			struct node *p = (struct node*)malloc(sizeof(struct node));
			p->e = exp;
			p->c = coeff;
			p->link = NULL;
			headR =p;
			tempR =p;
		}else{
			struct node *p = (struct node*)malloc(sizeof(struct node));
			p->e = exp;
			p->c = coeff;
			p->link =NULL;
			tempR->link=p;
			tempR = tempR->link;
		}
}

struct node* addpoly(struct node *p,struct node *q){
	//struct node *p = p1,*q = q1;
	
	while(p!=NULL && q!=NULL){
		if(p->e > q->e ){
			result(p->e,p->c);
			p = p->link;
		}else if(p->e < q->e){
			result(q->e,q->c);
			q = q->link;
		}else{
			result(p->e,q->c+p->c);
			p = p->link;
			q = q->link;
		}
	}
	while(p!=NULL){
		result(p->e,p->c);
		p = p->link;
	}
	while(q!=NULL){
		result(q->e,q->c);
		q = q->link;
	}
	return headR;
}


struct node* createPoly(){
	struct node *head = NULL,*temp = NULL;
	int size,exp,coeff;
	printf("Input the size : ");
	scanf("%d",&size);
	
	for(int i=0;i<size;i++){
		if(head == NULL){
			struct node *p = (struct node*)malloc(sizeof(struct node));
			printf("Input coefficient and exponent to be inserted");
			scanf("%d%d",&exp,&coeff);
			p->e = exp;
			p->c = coeff;
			p->link = NULL;
			head =p;
			temp=p;

		}else{
			struct node *p = (struct node*)malloc(sizeof(struct node));
			printf("Input coefficient and exponent to be inserted");
			scanf("%d%d",&exp,&coeff);
			p->e = exp;
			p->c = coeff;
			p->link =NULL;
			temp->link=p;
			temp = p;
		}
	}
	return head;
}


void main(){
	a = createPoly();
	b = createPoly();
	c = addpoly(a,b);
	while(c->link != NULL){
		printf("%dx^%d + ",c->c,c->e);
		c = c-> link;
	}
	printf("%dx^%d",c->c,c->e);
}