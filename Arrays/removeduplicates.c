int removeDuplicates(int* nums, int numsSize) {
    int *ptr = nums,count=1;
    for(int i =1; i<numsSize;i++){
        if(*(nums+i) != *ptr){
            ptr += 1;
            *ptr = *(nums+i);
            count++;
        }
    }
    return count;
}