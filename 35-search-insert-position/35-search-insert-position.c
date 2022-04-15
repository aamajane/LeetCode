

int searchInsert(int* nums, int numsSize, int target)
{
    for (int index = 0; index < numsSize; index++)
        if (nums[index] == target || nums[index] > target)
            return (index);
    return (numsSize);
}