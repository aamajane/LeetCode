

char nextGreatestLetter(char* letters, int lettersSize, char target)
{
    int start = 0, end = lettersSize - 1, mid;
    if(target < letters[0] || target > letters[lettersSize-1]) 
        return letters[0];
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (letters[mid] <= target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    if(start >= lettersSize) 
        return letters[0];
    return (letters[start]);
}