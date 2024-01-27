#include <stdio.h>

int main()
{
    int a[] = {10,2,15,5,6,9},slargest,ssmallest,largest,smallest;
    slargest = ssmallest = largest = smallest = a[0];
    for(int i=1;i<6;i++){
        if(a[i]>largest){
           largest=a[i]; 
        }else if(a[i]>slargest && a[i] != largest){
            slargest = a[i];
        }else if(a[i]<smallest){
            smallest=a[i];
        }else if(a[i]<ssmallest && a[i] != smallest){
            ssmallest=a[i];            
        }
    }
    printf("%d",ssmallest);
}