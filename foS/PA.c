#include <stdio.h>

struct poly{
    int coeff;
    int ex;
};

void main(){
    struct poly poly1[20],poly2[20],polyS[20];
    int s1,s2,iter1=0,iter2=0,iter3=0;
    
    printf("Input the size of poly1");
    scanf("%d",&s1);
    
    for(int i=0;i<s1;i++){
        printf("Input %d :",i);
        scanf("%d%d",&poly1[i].ex,&poly1[i].coeff);
    }
    
    printf("\nInput the size of poly2");
    scanf("%d",&s2);
    
    for(int i=0;i<s2;i++){
        printf("Input %d :",i);
        scanf("%d%d",&poly2[i].ex,&poly2[i].coeff);
    }
    
    while(iter1<s1 && iter2<s2){
        if(poly1[iter1].ex > poly2[iter2].ex){
            polyS[iter3].ex = poly1[iter1].ex;
            polyS[iter3].coeff = poly1[iter1].coeff;
            iter1++;
            iter3++;
        }else if(poly1[iter1].ex < poly2[iter2].ex){
            polyS[iter3].ex = poly2[iter2].ex;
            polyS[iter3].coeff = poly2[iter2].coeff;
            iter2++;
            iter3++;
        }else{
            polyS[iter3].ex = poly2[iter2].ex;
            polyS[iter3].coeff = poly2[iter2].coeff+poly1[iter1].coeff;
            iter1++;
            iter2++;
            iter3++;
        }
    }
    
    while(iter1<s1){
        polyS[iter3].ex = poly1[iter1].ex;
        polyS[iter3].coeff = poly1[iter1].coeff;
        iter1++;
        iter3++;
    }
    
    while(iter2<s2){
        polyS[iter3].ex = poly2[iter2].ex;
        polyS[iter3].coeff = poly2[iter2].coeff;
        iter2++;
        iter3++;
    }
    
    for(int i=0;i<iter3;i++){
        printf("%dx%d\t",polyS[i].coeff,polyS[i].ex);
    }
    
}