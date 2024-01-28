int check(int* nums, int numsSize) {
    int smallest= *nums, smallIndex =0,largeIndex;
    for(int i=1;i<numsSize;i++){
        if(*(nums+i) <= smallest){
            smallest = *(nums+i);
            smallIndex = i;
        }
    }
    largeIndex = smallIndex == 0?numsSize-1:smallIndex-1;
    while(largeIndex!=smallIndex){
        if(*(nums+largeIndex) == *(nums+smallIndex)){
        if(largeIndex == 0){
            largeIndex = numsSize-1;
        }else{
            largeIndex--;
        }
    }else{
        break;
    }
    }
    for(int i=(smallIndex+1)%numsSize;i!=largeIndex;i = (i+1)%numsSize){
        printf("%d",(i+1)%numsSize);
        if(*(nums+i) > *(nums+((i+1)%numsSize))){
            return 0;
        }
    }
    return 1;
}