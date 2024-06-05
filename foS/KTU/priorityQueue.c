#include<stdio.h>

int q[20][20],rear[20],front[20],priority,size;
//rear=-1,front=-1,

 void PQenqueue(int _priority,int elem){
 	if(_priority>priority){
 		printf("Beyond Priority");
 	}else{
 		if(rear[_priority] == size-1){
 		printf("Queue is full");
	 	}else if( rear[_priority] == -1 && front[_priority] == -1){
	 		rear[_priority] = rear[_priority]+1;
            front[_priority] = front[_priority]+1;
	 		q[_priority][rear[_priority]] = elem;
	 	}else{
	 		rear[_priority] +=1;
	 		q[_priority][rear[_priority]] = elem;
	 	}
 	}
 	
 }
 void PQdequeue(){
 	int item;
 	int _priority = priority;
 	
 	while (_priority>=0){
 		if(rear[_priority] == -1 && front[_priority] == -1){
 		printf("Queue of priority %d is empty",_priority);
 		_priority--;
	 	}else if(rear[_priority] == front[_priority]){
	 		item = q[_priority][front[_priority]];
	 		rear[_priority]=-1;
	 		front[_priority]=-1;
	 		printf("Removed element is %d\n",item);
            break;
	 	}else{
	 		item = q[_priority][front[_priority]];
	 		front[_priority]++;
	 		printf("Removed element is %d\n",item);
            break;
	 	}
 	}
 }
 
 void display(){
 	
 	for(int j=0;j<priority;j++){
 		for(int i=front[j];i<=rear[j];i++){
 		    printf("%d\t",q[j][i]);
 		}
 		printf("\n");
 	}
 
 
 	/*for(int i=front;i<=rear;i++){
 		printf("%d\t",q[i]);
 	}
 	printf("\n");*/
 }
 
 void main(){
 	int choice,condition=1,elem,p;
 	
 	printf("Input the size :");
 	scanf("%d",&size);
 	
 	printf("Input the priority :");
 	scanf("%d",&priority);
 	
 	for(int i=0;i<priority;i++){
 		rear[i] = 0;
 		front[i] = 0;	
 	}
 	
 	do{
 		printf("Menu\n1.Enqueue\n2.Dequeue\n3.Display\n");
 		printf("Input your choice : ");
 		scanf("%d",&choice);
 		switch(choice){
 			case 1:	printf("Input Priority :");
 				scanf("%d",&p);
 				printf("Input Element :");
 				scanf("%d",&elem);
 				PQenqueue(p,elem);
 				break;
 			case 2:PQdequeue();
 				break;
 			case 3:display();
 					break;
 		}
 		printf("1.Continue\n0.Quit");
 		scanf("%d",&condition);
 	}while(condition);
 }