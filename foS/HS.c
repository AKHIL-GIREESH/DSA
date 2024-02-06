#include<stdio.h>
#include<math.h>

int size,a[10],b[10],size;

void main(){
    
    int item,temp,l,LC,RC,c,p;
    
    printf("Input the size : ");
    scanf("%d",&size);
    
    for(int i=1;i<=size;i++){
        printf("Input the element : ");
        scanf("%d",&a[i]);
        
        c = i;
        p = c/2;
        
        while(p>0 && a[c]>a[p]){
            temp = a[c];
            a[c] = a[p];
            a[p] = temp;
            c=p;
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
            
            printf("element removed = %d",a[size]);
            size--;
            
            l = 1;
            while(l<=size){
                if(l*2 <=size){
                    LC = a[l*2];
                }else{
                    LC = -INFINITY;
                }
                
                if(l*2+1 <=size){
                    RC = a[l*2+1];
                }else{
                    RC = -INFINITY;
                }
                
                if(a[l] >= RC && a[l] >= LC){
                    break;
                }else{
                    if(LC>=RC){
                        temp = a[l];
                        a[l] = a[l*2];
                        a[l*2] = temp;
                        l*=2;
                    }else{
                        temp = a[l];
                        a[l] = a[l*2+1];
                        a[l*2+1] = temp;
                        l = l*2+1;
                    }
                }
            }
        }
    
}