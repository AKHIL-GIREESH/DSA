#include <stdio.h>
#include<math.h>

int a[100],SIZE;

void Heap_Insertion(){
    int item,c,p,temp;
    
    printf("Input the size : ");
    scanf("%d",&SIZE);
    
    for(int i=1;i<=SIZE;i++){
        printf("Input the item : ");
        scanf("%d",&item);
        
        a[i] = item;
        c = i;
        p = c/2;
        while(p>0 && a[c]>a[p]){
            temp = a[c];
            a[c] =  a[p];
            a[p] = temp;
            c = p;
            p = c/2;
        }
        
    }
    
    for(int i=1;i<=SIZE;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    
}

void Heap_Deletion(){
    
    int item,replacer,temp,LC,RC,iter;
    
    if(SIZE == 0){
        printf("Empty");
    }else{
        temp = a[1];
        a[1] = a[SIZE];
        a[SIZE] = temp;
        
        item = a[SIZE];
        printf("Removed element is : %d",a[SIZE]);
        SIZE--;
        iter = 1;
        while(iter<=SIZE){
            if(iter*2<=SIZE){
                LC = a[iter*2];
            }else{
                LC = -INFINITY;
            }
            if(iter*2+1<=SIZE){
                RC = a[iter*2+1];
            }else{
                RC = -INFINITY;
            }
            if(a[iter]>=LC && a[iter]>=RC){
                break;
            }else if(LC>=RC){
                printf("%d %d\n",a[iter],LC);
                temp = a[iter];
                a[iter] = LC;
                a[iter*2] = temp;
                //printf("%d %d\n",a[iter],);
                iter *=2;
            }else{
                temp = a[iter];
                a[iter] = RC;
                a[iter*2+1] = temp;
                iter = iter*2+1;
            }
            
        }
        for(int i=1;i<=SIZE;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    }
}

void main()
{
    printf("Insertion\n");
    Heap_Insertion();
    
    printf("Deletion\n");
    Heap_Deletion();
}
