#include<stdio.h>

int size,a[10],b[10];

void merge(int low,int mid,int high){
    int iter1 = low,iter2 = mid+1,iter3=low;
    
    while(iter1<=mid && iter2<=high){
        if(a[iter1] <= a[iter2]){
            b[iter3] = a[iter1];
            iter1++;
            iter3++;
        }else{
            b[iter3] = a[iter2];
            iter2++;
            iter3++;
        }
    }
    
    while(iter1<=mid){
        b[iter3] = a[iter1];
        iter1++;
        iter3++;
    }
    
    while(iter2<=high){
        b[iter3] = a[iter2];
        iter2++;
        iter3++;
    }
    
    for(int i=low;i<=high;i++){
        a[i] = b[i];
    }
}

void mergeSort(int low,int high){
    int mid;
    if(low<high){
        mid = (low+high)/2;
        mergeSort(low,mid);
        mergeSort(mid+1,high);
        merge(low,mid,high);
    }
}

void main(){
    int temp,elem;
    
    printf("Input the size :");
    scanf("%d",&size);
    
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    
    mergeSort(0,size-1);
    
    for(int i=0;i<size;i++){
        printf("%d",a[i]);
    }
}