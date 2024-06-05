#include<stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *link;
};

struct node *front = NULL,*rear = NULL;

void ENQUEUE(){
	int item;
	//struct node *temp;
	if(front == NULL && rear == NULL){
		struct node *p = (struct node *)malloc(sizeof(struct node));
		printf("Input data to be inserted");
		scanf("%d",&item);
		p->data = item;
		p->link = NULL;
		front = p;
		rear = p;
	}else{
		struct node *p = (struct node *)malloc(sizeof(struct node));
		printf("Input data to be inserted");
		scanf("%d",&item);
		p->data = item;
		p->link = NULL;
		rear->link = p;
		rear = p;
		//p->link = head;
		//head = p;
	}
}

void DEQUEUE(){
	struct node *temp = front;//,*temp1 = head;
	
	if(front == NULL && rear == NULL){
		printf("Empty Queue\n");
	}else if(front == rear){
		front = NULL;
		rear = NULL;
		printf("Deleted Element is %d",temp->data);
		free(temp);
	}
	else{
		front = front->link;
	
		printf("Deleted Element is %d",temp->data);
		free(temp);
	}
}


void Display(){
	if(front == NULL){
		printf("Queue is empty");
	}else{
		struct node *temp = front;
		while(temp != NULL){
			printf("%d\t",temp->data);
			temp = temp->link;
		}
		//printf("%d\t",temp1->data);
	}
	printf("\n");
}

void main(){
	int choice,condition=1;

	do{
 		printf("Menu\n1.ENQUEUE\n2.DEQUEUE\n3.Display\n4.Exit\n");
 		printf("Input your choice : ");
 		scanf("%d",&choice);
 		switch(choice){
 			case 1:ENQUEUE();	
 				//struct node *p = (struct node *)malloc(sizeof(struct node));
 				break;
 			case 2:DEQUEUE();
 				break;
 			case 3:Display();
 					break;
 			case 4:condition=0;
 					break;
 		}
 	}while(condition);
}