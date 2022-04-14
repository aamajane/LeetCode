

int removeDuplicates(int* nums, int numsSize)
{
    int cnt = 1;
    for (int i = 0; i + 1 < numsSize; i++)
        if (nums[i + 1] > nums[i])
            nums[cnt++] = nums[i + 1];
    return (cnt);
}