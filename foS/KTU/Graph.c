#include<stdio.h>
#include<stdlib.h>

struct node{
	int vertex;
	struct node *link;
};

struct node *GraphArray[100]; 

int DFS[100],BFS[100];

void GraphRepresentation(){
    int size,subsize,elem;
	 printf("Input the no.of Elements = ");
	 scanf("%d",&size);
	 
	 for(int i=0;i<size;i++){
	 	GraphArray[i] = NULL;
	 }
	 
	 for(int i=1;i<size;i++){
	    struct node *ptr = GraphArray[i];
	 	printf("Input the no.of subelements = ");
	 	scanf("%d",&subsize);
	 	for(int j=1;j<subsize;j++){
	 	    
	 	    
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
	 	
	 }
}

void main(){
	
}