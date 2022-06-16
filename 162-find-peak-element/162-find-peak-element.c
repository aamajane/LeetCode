

int findPeakElement(int* nums, int numsSize)
{
    int start = 0, end = numsSize - 1, mid;
    while (start < end)
    {
        mid = (start + end) / 2;
        if (mid && mid < numsSize - 1 && nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
            return (mid);
        if (mid < numsSize - 1 && nums[mid] < nums[mid + 1])
            start = mid + 1;
        else if (mid && nums[mid] < nums[mid - 1])
            end = mid - 1;
        else if (!mid || mid == numsSize - 1)
            return (mid);
    }
    return (start);
}
