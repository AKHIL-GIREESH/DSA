#include <stdio.h>

void main(){
    int a[20],size,mid,low,high,element;
    
    printf("Input the size of the array");
    scanf("%d",&size);
    
    for(int i=0;i<size;i++){
        printf("Input element at %d",i);
        scanf("%d",&a[i]);
    }
    
    printf("Input the element to be searched : ");
    scanf("%d",&element);
    
    low=0;
    high = size-1;
    
    while(low<=high){
        mid = (low+high)/2;
        if(a[mid] == element){
            printf("Found at %d",mid);
            break;
        }else if (a[mid] < element){
            low = mid+1;   
        }else{
            high = mid-1;
        }
    }
    
}