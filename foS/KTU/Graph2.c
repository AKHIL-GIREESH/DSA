#include<stdio.h>
#include<stdlib.h>

struct node{
	int vertex;
	struct node *link;
};

struct node *GraphArray[100];

int Stack[100],Queue[100],BF[100],DF[100],top=-1,front=-1,rear=-1,size;


int Search(int algo,int vertex){
	int flag=0;
	if(algo){
		for(int i=0;i<top;i++){
			if(DF[i] == vertex){
				flag = 1;
				break;
			}
		}
	}else{
		for(int i=0;i<top;i++){
			if(BF[i] == vertex){
				flag = 1;
				break;
			}
		}
	}
	return flag; 
}

void ENQUEUE(int val){
	if(front == -1 && rear == -1){
		front++;
		rear++;
		Stack[rear] = val; 
	}else{
		rear++;
		Stack[rear] = val;
	}
}

int DEQUEUE(){
	int temp;
	if(front == rear){
		temp = Queue[front];
		front=-1;
		rear=-1;
		return temp;
	}else{
		temp = Queue[front];
		front++;
		return temp;
	}
}

void BFS(){
	struct node *ptr;
	int vertex,i=0;
	printf("Input the Source Value = ");
	scanf("%d",&vertex);
	ENQUEUE(vertex);
	while(front != -1 && rear != -1){
		vertex = DEQUEUE();
		if(Search(0,vertex) == 0){
			BF[i] = 0;
			i++;
		}
		ptr = GraphArray[vertex];
		while(ptr!=NULL){
			ENQUEUE(ptr->vertex);
			ptr = ptr->link;
		}
	}
	
	for(int j=0;j<size;j++){
		printf("%d\t",BF[i]);
	}
}

void PUSH(int val){
	top++;
	Stack[top] = val;
}

int POP(){
	int temp;
	if(top !=-1){
		temp = Stack[top];
		top--;
		return temp;
	}
}

void DFS(){
	struct node *ptr;
	int vertex,i=0;
	printf("Input the Source Value = ");
	scanf("%d",&vertex);
	PUSH(vertex);
	while(top !=-1){
		vertex = POP();
		if(Search(1,vertex) == 0){
			DF[i] = 0;
			i++;
		}
		ptr = GraphArray[vertex];
		while(ptr!=NULL){
			PUSH(ptr->vertex);
			ptr = ptr->link;
		}
	}
	
	printf("%d\t",DF[i]);
}

void GraphRepresentation(){
    int subsize,elem;
	 printf("Input the no.of Elements = ");
	 scanf("%d",&size);
	 
	 for(int i=1;i<size;i++){
	 	GraphArray[i] = NULL;
	 }
	 
	 for(int i=1;i<size;i++){
	   struct node *ptr = GraphArray[i];
	 	printf("Input the no.of subelements = ");
	 	scanf("%d",&subsize);
	 	for(int j=0;j<subsize;j++){
	 	    
	 	    struct node *p = (struct node *)malloc(sizeof(struct node));
	 	    
	 	    printf("Input the element to be inserted = ");
	 	    scanf("%d",&elem);
	 	    
	 	    p->link = NULL;
	 	    p->vertex = elem;
	 	    
	 	    if(ptr == NULL){
	 	            GraphArray[i] = p;
	 	            ptr = p;
	 	    }else{
	 	        ptr->link = p;
	 	        ptr = p;
	 	    }
	 	    
	 	}
	 	printf("%d",*GraphArray[i]);
	 }
}

void main(){
	int choice,condition = 1;
	
	do{
		printf("Menu\n1.Graph Representation\n2.BFS\n3.DFS\n4.EXIT\nInput your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1: GraphRepresentation();
					  break;
			
			case 2: BFS();
					  break;
			
			case 3: DFS();
					  break;
			
			case 4: condition=0;
					  break;
		}
	}while(condition);
}