int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    *returnSize=2;
    int *tmp = (int *)malloc(2*sizeof(int));
    for(int i = 0; i < numsSize; i++){
        for(int j = i+1; j < numsSize; j++){
            if(nums[i] + nums[j] == target){
                tmp[0] = i;
                tmp[1] = j;
                // printf("%d, %d\n", tmp[0], tmp[1]); 
               return tmp;
    
            }  
        }
    }
    return tmp;
    
}
