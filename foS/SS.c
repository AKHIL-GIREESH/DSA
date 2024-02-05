#include<stdio.h>

void main(){
    int size,a[10],loc,min,temp,j;
    printf("Input the size : ");
    scanf("%d",&size);
    
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<size-1;i++){
        loc = i;
        min = a[i];
        for(j=i+1;j<size;j++){
            if(a[j]<min){
                loc = j;
                min = a[j];
            }
        }
        
        if(loc != i){
            temp = a[i];
            a[i] = a[loc];
            a[loc] = temp;
            for(int i=0;i<size;i++){
                printf("%d",a[i]);
            }
            printf("\n");
        }
    }
    
    for(int i=0;i<size;i++){
        printf("%d",a[i]);
    }
}