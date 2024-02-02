#include <stdio.h>

int mr[20][20],tr[20][20],T[20][20],M[20][20],S[20][20],row,columns,nz1=1,nz2=1;


void addition(){
    int iter1=1,iter2=1,iter3=1;
    while(iter1 < nz1 && iter2 < nz2){
        if(M[iter1][0] < T[iter2][0] ){
            S[iter3][0] = M[iter1][0];
            S[iter3][1] = M[iter1][1];
            S[iter3][2] = M[iter1][2];
            iter1++;
            iter3++;
        }else if(M[iter1][0] > T[iter2][0] ){
            S[iter3][0] = T[iter2][0];
            S[iter3][1] = T[iter2][1];
            S[iter3][2] = T[iter2][2];
            iter2++;
            iter3++;
        }else if(M[iter1][0] == T[iter2][0] ){
            if(M[iter1][1] < T[iter2][1]){
                S[iter3][0] = M[iter1][0];
                S[iter3][1] = M[iter1][1];
                S[iter3][2] = M[iter1][2];
                iter1++;
                iter3++;
            }else if(M[iter1][1] > T[iter2][1]){
                S[iter3][0] = T[iter2][0];
                S[iter3][1] = T[iter2][1];
                S[iter3][2] = T[iter2][2];
                iter2++;
                iter3++;
            }else{
                S[iter3][0] = T[iter2][0];
                S[iter3][1] = T[iter2][1];
                S[iter3][2] = T[iter2][2]+M[iter1][2];
                iter1++;
                iter2++;
                iter3++;
            }
        }
    }
    
    while(iter1<nz1){
        S[iter3][0] = M[iter1][0];
        S[iter3][1] = M[iter1][1];
        S[iter3][2] = M[iter1][2];
        iter1++;
        iter3++;
    }
    
    while(iter2<nz2){
        S[iter3][0] = T[iter2][0];
        S[iter3][1] = T[iter2][1];
        S[iter3][2] = T[iter2][2];
        iter2++;
        iter3++;
    }
    
    S[0][0] = T[0][0] ;
    S[0][1] = T[0][1];
    S[0][2] = iter3-1;
    
    for(int i=0;i<iter3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",S[i][j]);
        }
        printf("\n");
    }
    
}

void main(){
    printf("Input the rows and columns");
    scanf("%d%d",&row,&columns);
    
    printf("M1");
    for(int i=0;i<row;i++){
        for(int j=0;j<columns;j++){
            scanf("%d",&mr[i][j]);
        }
    }
    
    for(int i=0;i<row;i++){
        for(int j=0;j<columns;j++){
            if(mr[i][j] != 0){
                M[nz1][0] = i;
                M[nz1][1] = j;
                M[nz1][2] = mr[i][j];
                nz1++;
            }
        }
    }
    
    M[0][0] = row;
    M[0][1] = columns;
    M[0][2] = nz1 -1;
    
    for(int i=0;i<nz1;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }
    
    printf("\nM2");
    for(int i=0;i<row;i++){
        for(int j=0;j<columns;j++){
            scanf("%d",&tr[i][j]);
        }
    }
    
    for(int i=0;i<row;i++){
        for(int j=0;j<columns;j++){
            if(mr[i][j] != 0){
                T[nz2][0] = i;
                T[nz2][1] = j;
                T[nz2][2] = tr[i][j];
                nz2++;
            }
        }
    }
    
    T[0][0] = row;
    T[0][1] = columns;
    T[0][2] = nz2 -1;
    
    for(int i=0;i<nz2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",T[i][j]);
        }
        printf("\n");
    }
    
    addition();
    
    
}