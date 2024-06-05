#include<stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *Llink;
	struct node *Rlink;
};

struct node *head = NULL;
struct node *tail = NULL;

void insertionAtBeginning(){
	int item;
	if(head == NULL){
		struct node *p = (struct node *)malloc(sizeof(struct node));
		printf("Input data to be inserted");
		scanf("%d",&item);
		p->data = item;
		p->Rlink = NULL;
		p->Llink = NULL;
		head = p;
		tail=p;
	}else{
		struct node *p = (struct node *)malloc(sizeof(struct node));
		printf("Input data to be inserted");
		scanf("%d",&item);
		p->data = item;
		p->Rlink = head;
		p->Llink = NULL;
		head->Llink = p;
		head = p;
	}
}

void insertionAtEnd(){
	int item;
	struct node *temp;
	if(head == NULL){
		struct node *p = (struct node *)malloc(sizeof(struct node));
		printf("Input data to be inserted");
		scanf("%d",&item);
		p->data = item;
		p->Rlink = NULL;
		p->Llink = NULL;
		head = p;
		tail=p;
	}else{
		struct node *p = (struct node *)malloc(sizeof(struct node));
		printf("Input data to be inserted");
		scanf("%d",&item);
		p->data = item;
		p->Rlink = NULL;
		p->Llink = tail;
		tail->Rlink = p;
		tail = p;
		//temp->Rlink = p;
		//p->Llink = temp;
		//p->link = head;
		//head = p;
	}
}

void insertionAtAnyPosition(){
	int item,position;
	struct node *temp,*temp1;
	
	struct node *p = (struct node *)malloc(sizeof(struct node));
	printf("Input data to be inserted");
	scanf("%d",&item);
	p->data = item;
	
	printf("Insert position to be inserted in");
	scanf("%d",&position);
	
	//struct node *temp1;
	if(position == 1){
		if(head == NULL){
		p->Rlink = NULL;
		p->Llink = NULL;
		head = p;
		tail = p;
	}else{
		p->Rlink = head;
		p->Llink = NULL;
		head->Llink = p;
		head = p;
	}
	}else{
		temp = head;
		for(int i=1;i<position-1;i++){
			temp = temp->Rlink;
		}
		temp1 = temp->Rlink;
		temp->Rlink = p;
		temp1->Llink = p;
		p->Rlink = temp1;
		p->Llink = temp;
		//p->link = temp->link;
		//temp->link = p;
	}
}

void deletionFromBeginning(){
	struct node *temp = head;
	
	if(head == NULL){
		printf("Empty SLL\n");
	}else if(head->Rlink == NULL){   				///////Here......................................
		head = NULL;
        tail = NULL;
		printf("Deleted Element is %d",temp->data);
		free(temp);
	}
	else{
		head = head->Rlink;
		printf("Deleted Element is %d",temp->data);
        head->Llink = NULL;
		free(temp);
	}
}

void deletionFromEnd(){
	struct node *temp = head;
	
	if(head == NULL){
		printf("Empty DLL\n");
	}else if(head->Rlink == NULL){
		head = NULL;
		printf("Deleted Element is %d",temp->data);
		free(temp);
	}else{
		temp = tail;
        tail = tail->Llink;
        tail->Rlink = NULL;
		//head = head->link;
		printf("Deleted Element is %d",temp->data);
		free(temp);
	}
}

void deletionFromAnyPosition(){
	int position;
	struct node *temp = head;
	struct node *temp1,*temp2;
	
	printf("Insert position to be Deleted in");
	scanf("%d",&position);
	
	if(position == 1){
		if(head == NULL){
			printf("Empty DLL\n");
		}else if(head->Rlink != NULL){
			head = NULL;
            tail = NULL;
			printf("Deleted Element is %d",temp->data);
			free(temp);
		}
		else{
			head = head->Rlink;
            head->Llink = NULL;
			printf("Deleted Element is %d",temp->data);
			free(temp);
		}
	}else{
		for(int i=1;i<position-1;i++){
			temp = temp->Rlink;
		}
		temp1 = temp->Rlink;
        temp2 = temp->Llink;
		temp->Rlink = temp2;
        temp2->Llink = temp;
		printf("Deleted Element is %d",temp1->data);
		free(temp1);
		//p->link = temp->link;
		//temp->link = p;
	}

}

void Display(){
	if(head == NULL){
		printf("SLL is empty");
	}else{
		struct node *temp = head;
		while(temp->Rlink !=NULL){
			printf("%d\t",temp->data);
			temp = temp->Rlink;
		}
		printf("%d\t",temp->data);
	}
	printf("\n");
}

void main(){
	int choice,condition=1;

	do{
 		printf("Menu\n1.Insertion at Beginning\n2.Insertion at End\n3.Insertion at any Position\n4.Deletion from Beginning\n5.Deletion from 		  End\n6.Deletion from any position\n7.Display\n8.Exit\n");
 		printf("Input your choice : ");
 		scanf("%d",&choice);
 		switch(choice){
 			case 1:insertionAtBeginning();	
 				//struct node *p = (struct node *)malloc(sizeof(struct node));
 				break;
 			case 2:insertionAtEnd();
 				break;
 			case 3:insertionAtAnyPosition();
 				break;
 			case 4:deletionFromBeginning();
 				break;
 			case 5:deletionFromEnd();
 				break;
 			case 6:deletionFromAnyPosition();
 				break;
 			case 7:Display();
 					break;
 			case 8:condition=0;
 					break;
 		}
 	}while(condition);
}