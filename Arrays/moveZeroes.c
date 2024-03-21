#include<stdio.h>

void main(){
	//void moveZeroes(int* nums, int numsSize) {
    	int a[] = {1,0,2,3,2,0,0,4,5,1},numsSize=10,temp;
	int *nums = a;
	int *_nums = nums+numsSize-1;
	while(nums<_nums){
		while(*nums != 0){
			nums++;
		}
		while(*_nums == 0){
			_nums--;
		}

		if(nums<_nums){
			temp = *nums;
			*nums = *_nums;
			*_nums = temp;
		}
	}

	for(int i=0;i<numsSize;i++){
		printf("%d",a[i]);
	}
	    

}
