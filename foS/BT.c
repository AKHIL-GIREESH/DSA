#include<stdio.h>
#include <stdlib.h>

int bt[50],size;

void display(){
    for(int i=1;i<=size;i++){
        printf("%d\t",bt[i]);
    }
    printf("\n");
}

void Create_BT(int index,int data){
    int LC,RC,val;
    if(index != 0){
        bt[index] = data;
        if(2*index <= size){
            printf("Do you want LC? : ");
            scanf("%d",&LC);
            
            if(LC == 1){
                printf("Input the value : ");
                scanf("%d",&val);
                Create_BT(2*index,val);
            }else{
                Create_BT(0,0);
            }
        }
        if(2*index+1 <= size){
            printf("Do you want RC? : ");
            scanf("%d",&RC);
            
            if(RC == 1){
                printf("Input the value : ");
                scanf("%d",&val);
                Create_BT(2*index+1,val);
            }else{
                Create_BT(0,0);
            }
        }
    }
}

int Search(int index,int val){
    int l;
    if(bt[index] == val){
        return index;
    }else{
        if(2*index <= size){
            l = Search(2*index,val);
        }else{
            return 0;
        }
        
        if(l == 0){
            if(2*index+1 <= size){
                l = Search(2*index+1,val);
            }else{
                return 0;
            }
        }
    }
}

void Insert(int val,int parent){
    int l,LC;
    l = Search(1,parent);
    if(l == 0){
        printf("Cannot insert as parent is not found");
    }else{
        if(bt[2*l] == NULL || bt[2*l+1] == NULL){
            printf("Do you want to insert LC?");
            scanf("%d",&LC);
            if(LC == 1){
                if(bt[2*l] == NULL ){
                    bt[2*l] = val;
                }else{
                    printf("Cannot insert LC");
                }
            }else{
                if(bt[2*l+1] == NULL ){
                    bt[2*l+1] = val;
                }else{
                    printf("Cannot insert RC");
                }
            }
        }else{
            printf("Cannot insert - both children present");
        }
    }
}

void Delete(){
    
}

void main(){
    int choice,condition=1;
    
    printf("Input th size of the bt :" );
    scanf("%d",&size);
    
    printf("\nMenu\n1.Create BT\n2.Search\n3.Insert\n4.Delete\nInput your choice :");
    scanf("%d",&choice);
    
    Create_BT(1,10);
    printf("%d",Search(1,10));
    printf("%d",Search(1,20));
    printf("%d\n",Search(1,50));
    Insert(30,20);
    display();
    
}