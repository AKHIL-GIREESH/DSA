#include<stdio.h>


void reverse(int *ph,int *pt){
	int temp;
	printf("%d",*pt);
	printf("%d\n",*ph);
	while(ph<pt){
		temp = *ph;
		*ph = *pt;
		*pt = temp;
		ph++;
		pt--;
	}
	printf("%d",*pt);
	printf("%d\n",*ph);
}

void main(){
	int a[] = {1,2,3,4,5,6,7},K=3,N=7;
	int *ptr = a;
	reverse(ptr,ptr+N-K-1);
	reverse(ptr+N-K,ptr+N-1);
	reverse(ptr,ptr+N-1);
	printf("%d",*ptr);
	printf("%d",*(ptr+N-1));
}
