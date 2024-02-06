#include<stdio.h>
#include<stdlib.h>

struct G{
    int vertex;
    struct G *link;
};

int size,iter;
struct G *GPTR[10];
int DFS[50],top = -1,BFS[50],front=-1,rear=-1,inde=0;

void PUSH(int v){
    // top++;
    // DFS[top] = v;
    if(front == -1 && rear == -1){
        front++;
        rear++;
        DFS[rear] = v;
    }else{
        rear++;
        DFS[rear] = v;
    }
}

int POP(){
    int item = DFS[front];
    front++;
    return item;
}

int Search(int v){
    for(int i=0;i<=inde;i++){
        //printf("\n%d\n",DFS[i]);
        if(BFS[i] == v){
            return 1;
        }
    }
    return 0;
}

void main(){
    int sizeV,item,VERTEX;
    struct G *ptr = NULL;
    
    printf("Input the size : ");
    scanf("%d",&size);
    
    for(int i=1;i<=size;i++){
        GPTR[i] = NULL;
    }
    
    for(int i=1;i<=size;i++){
        ptr = GPTR[i];
        printf("Input the number adjacent vertices : ");
        scanf("%d",&sizeV);
        
        for(int j=1;j<=sizeV;j++){
            scanf("%d",&item);
            
            struct G *p = (struct G *)malloc(sizeof(struct G));
            p->vertex = item;
            p->link = NULL;
            
            if(ptr == NULL){
                GPTR[i] = p;
                ptr = p;
            }else{
                ptr->link = p;
                ptr = p;
            }
        }
        
    }
    
    printf("Input the vertex to start searching : ");
    scanf("%d",&VERTEX);
    
    PUSH(VERTEX);
    while(front <= rear){
        VERTEX = POP();
        if(Search(VERTEX) == 0){
            //printf("%d %d",Search(VERTEX),VERTEX);
            BFS[inde] = VERTEX;
            inde++;
            printf("%d\t",VERTEX);
            ptr = GPTR[VERTEX];
            while(ptr!=NULL){
                PUSH(ptr->vertex);
                ptr=ptr->link;
            }
        }
    }
}