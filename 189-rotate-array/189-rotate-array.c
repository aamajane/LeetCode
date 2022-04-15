

void rotate(int* nums, int numsSize, int k)
{
    if (k == 0 || numsSize == 1 || k % numsSize == 0)
        return ;
    if (k > numsSize)
        k %= numsSize;
    int* temp = calloc(numsSize, sizeof(int));
    memmove(temp, nums + (numsSize - k), sizeof(int) * k);
    memmove(temp + k, nums, sizeof(int) * (numsSize - k));
    memmove(nums, temp, sizeof(int) * numsSize);
    free(temp);
}