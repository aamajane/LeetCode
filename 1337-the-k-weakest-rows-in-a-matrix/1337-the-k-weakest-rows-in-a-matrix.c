

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int extraFun(int *array, int index, int size)
{
    for (int i = 0; i < size; i++)
        if (array[i] == index)
            return (0);
    return (1);
}

int* kWeakestRows(int** mat, int matSize, int* matColSize, int k, int* returnSize)
{
    *returnSize = k;
    int* array = calloc(sizeof(int), *returnSize);
    k = 0;
    for (int i = 0; i < *matColSize && k < *returnSize; i++)
        for (int j = 0; j < matSize && k < *returnSize; j++)
            if ((!k && !mat[j][i]) || (k && !mat[j][i] && extraFun(array, j, k)))
                array[k++] = j;
    for (int i = 0; i < *matColSize && k < *returnSize; i++)
        for (int j = 0; j < matSize && k < *returnSize; j++)
            if ((k && mat[j][i] && extraFun(array, j, k)))
                array[k++] = j;
    return(array);
}