#include<stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *link;
};

struct node *top = NULL;

void PUSH(){
	int item;
	struct node *temp;
	if(top == NULL){
		struct node *p = (struct node *)malloc(sizeof(struct node));
		printf("Input data to be inserted : ");
		scanf("%d",&item);
		p->data = item;
		p->link = NULL;
		top = p;
	}else{
		struct node *p = (struct node *)malloc(sizeof(struct node));
		printf("Input data to be inserted : ");
		scanf("%d",&item);
		p->data = item;
		p->link = top;
		temp = top;
		while(temp->link!=NULL){
			temp = temp->link;
		}
		temp->link = NULL;
		top = p;
	}
}

void POP(){
	struct node *temp = top;
	
	if(top == NULL){
		printf("Empty SLL\n");
	}else if(top->link == NULL){
		top = NULL;
		printf("Deleted Element is %d",temp->data);
		free(temp);
	}
	else{
		top = top->link;
		//temp1->link = NULL;
	
		printf("Deleted Element is %d",temp->data);
		free(temp);
	}
}


void Display(){
	if(top == NULL){
		printf("SLL is empty");
	}else{
		struct node *temp = top;
		while(temp->link !=NULL){
			printf("%d\t\n",temp->data);
			temp = temp->link;
		}
		printf("%d\t",temp->data);
	}
	printf("\n");
}

void main(){
	int choice,condition=1;

	do{
 		printf("Menu\n1.PUSH\n2.POP\n3.DISPLAY\n4.Exit\n");
 		printf("Input your choice : ");
 		scanf("%d",&choice);
 		switch(choice){
 			case 1:PUSH();	
 				//struct node *p = (struct node *)malloc(sizeof(struct node));
 				break;
 			case 2:POP();
 				break;
 			case 3:Display();
 					break;
 			case 4:condition=0;
 					break;
 		}
 	}while(condition);
}