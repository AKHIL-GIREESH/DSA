#include<stdio.h>

void main(){
    int size,a[10],temp,elem,j;
    
    printf("Input the size :");
    scanf("%d",&size);
    
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=1;i<size;i++){
        elem = a[i];
        for(j=i-1;j>=0;j--){
            if(a[j]>elem){
                a[j+1] = a[j];
            }else{
                break;
            }
        }
        a[j+1] = elem;
        
        for(int i=0;i<size;i++){
            printf("%d",a[i]);
        } 
        printf(" ");
        
    }
    
    for(int i=0;i<size;i++){
        printf("%d",a[i]);
    }
}