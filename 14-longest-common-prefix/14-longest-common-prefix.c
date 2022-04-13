

char * longestCommonPrefix(char **strs, int strsSize)
{
    for (int count = 0; strs[0][count]; count++)
        for (int i = 1; i < strsSize; i++)
            if (strs[0][count] != strs[i][count])
                return (strndup(strs[0], count));
    return (strs[0]);
}