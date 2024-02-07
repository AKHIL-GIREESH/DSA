#include<stdio.h>
#include<stdlib.h>

int s[20],top=-1,size;

void PUSH(int _v){
    int i;
    top++;
    for(i=top-1;i>=0;i--){
        if(s[i]<_v){
            s[i+1] = s[i];
        }else{
            break;
        }
    }
    s[i+1] = _v;
    
    for(i=top;i>=0;i--){
        printf("%d\t",s[i]);
    }
    printf("\n");
}

void main(){
    // printf("Input the size of the stack");
    // scanf("%d",&size);
    
    PUSH(5);
    PUSH(2);
    PUSH(6);
    PUSH(1);
    PUSH(4);
    printf("%d",s[top]);
}