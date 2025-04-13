#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *result = malloc(sizeof(int) * 2);
    *returnSize = 0;
    int tmp;
    for (int i=0; i<numsSize; i++) {
        for (int j=i+1; j<numsSize; j++) {
            result[0] = i;
            tmp = target - nums[i];
            if (tmp==nums[j]) {
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    free(result);
    return NULL;
}

int main() {
    int input[] = {2,7,11,15};
    int *retSize = malloc(sizeof(int) * 1);
    int *result = twoSum(input, 4, 9, retSize);
    printf ("[%d, %d]", *(result), *(result+1));
    return 0;
}