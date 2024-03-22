#include <stdio.h>

int main() {
    int a[] = {1,0,2,3,2,0,0,4,5,1};
    int numsSize = 10,temp;
    int *nums = a;
    int *_lptr = nums + numsSize - 1;
    int *_nums;
    int flag = 0;

    // Find the first occurrence of 0
    while (nums < _lptr) {
        if (*nums == 0) {
            flag = 1;
            break;
        }
        nums++;
    }

    // Print the elements after the first occurrence of 0
    if (flag == 1) {
        for (_nums = nums + 1; _nums <= _lptr; _nums++) {
            if(*_nums !=0){
                temp = *_nums;
                *_nums = *nums;
                *nums = temp;
                nums++;
            }

            printf("\n");
            for(int i=0;i<numsSize;i++){
		        printf("%d",a[i]);
            }
            printf("\n");
        }

    } else {
        printf("0 not found in the array.");
    }

    return 0;
}
