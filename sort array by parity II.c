int* sortArrayByParityII(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
int* result = malloc(sizeof(int)*numsSize);
int even = 0;
int odd = 1;
for(int i = 0; i<numsSize;i++){
    if(nums[i] % 2 == 0){
        result[even] = nums[i];
        even += 2;
    }else{
        result[odd] = nums[i];
        odd += 2;
    }
}

return result;

}