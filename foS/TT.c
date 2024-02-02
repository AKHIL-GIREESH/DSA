#include <stdio.h>

int m[20][20],tr[20][20],T[20][20],row,column,nz=1;

void triplet(){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(m[i][j] != 0){
                tr[nz][0] = i;
                tr[nz][1] = j;
                tr[nz][2] = m[i][j];
                nz++;
            }
        }
    }
    
    tr[0][0] = row;
    tr[0][1] = column;
    tr[0][2] = nz -1;
    
    for(int i=0;i<nz;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",tr[i][j]);
        }
        printf("\n");
    }
    
}

void Transpose(){
    int k=1;
    for(int j=0;j<tr[0][1];j++){
        for(int i=1;i<nz;i++){
            if(tr[i][1] == j){
                T[k][0] = tr[i][1];
                T[k][1] = tr[i][0];
                T[k][2] = tr[i][2];
                k++;
            }
        }
    }
    
    T[0][0] = tr[0][1];
    T[0][1] = tr[0][0];
    T[0][2] = tr[0][2];
    
    for(int i=0;i<nz;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",T[i][j]);
        }
        printf("\n");
    }
}

int main(){
    printf("Input the row and column");
    scanf("%d%d",&row,&column);
    
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&m[i][j]);
        }
    }
    
    
    triplet();
    Transpose();
}