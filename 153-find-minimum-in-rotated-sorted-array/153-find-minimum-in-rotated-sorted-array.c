

int findMin(int *nums, int numsSize)
{
    int first = 0, last = numsSize - 1, mid;
    if (nums[first] > nums[last])
    {
        while (first != last)
        {
            if (nums[first] > nums[last])
            {
                mid = last;
                last = (last + first) / 2;
            }
            if (nums[first] < nums[last])
            {
                first = last;
                last = mid;
            }
        }
        return(nums[first + 1]);
    }
    return(nums[first]);
}