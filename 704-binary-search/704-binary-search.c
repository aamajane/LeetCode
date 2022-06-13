

int search(int* nums, int numsSize, int target)
{
    int start = 0, end = numsSize - 1, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (nums[mid] < target)
            start = mid + 1;
        else if (nums[mid] > target)
            end = mid - 1;
        else if (nums[mid] == target)
            return (mid);
    }
    return (-1);
}