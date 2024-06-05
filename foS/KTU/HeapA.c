#include<stdio.h>
#include<math.h>

int a[10];

void main(){
    int size,item,c,p,temp,LC,RC,iter;
    printf("Input size : ");
    scanf("%d",&size);
    
    for(int i=1;i<=size;i++){
        //struct node *p = (struct node *)malloc(sizeof(struct node));
        printf("Input element :");
        scanf("%d",&item);
        
        a[i] = item;
        c = i;
        p = c/2;
        while(p>0 && a[c]<a[p]){
            temp = a[c];
            a[c] = a[p];
            a[p] = temp;
            
            c = p;
            p = c/2;
        }
    }
    
    for(int i=1;i<=size;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    
    
    while(size>0){
        temp = a[1];
        a[1] = a[size];
        a[size] = temp;
        
        printf("%d\t",a[size--]);
        iter = 1;
        
        while(iter<=size){
            if(iter*2 <= size){
                LC = a[iter*2];
            }else{
                LC = INFINITY;
            }
            
            if(iter*2+1 <= size){
                RC = a[iter*2+1];
            }else{
                RC = INFINITY;
            }
            
            if(a[iter]>LC || a[iter]>RC){
                if(LC<RC){
                    temp = a[iter];
                    a[iter] = a[iter*2];
                    a[iter*2] = temp;
                }else{
                    temp = a[iter];
                    a[iter] = a[iter*2+1];
                    a[iter*2+1] = temp;
                }
            }else{
                break;
            }
        }
        
    }
}