

void rotate(int* nums, int numsSize, int k)
{
    if (k == 0 || numsSize == 1 || k % numsSize == 0)
        return ;
    if (k > numsSize)
        k %= numsSize;
    int* tmp = calloc(numsSize, sizeof(int));
    memmove(tmp, nums + (numsSize - k), sizeof(int) * k);
    memmove(tmp + k, nums, sizeof(int) * (numsSize - k));
    memmove(nums, tmp, sizeof(int) * numsSize);
    free(tmp);
}