

bool isPalindrome(int x)
{
    if (x < 0)
        return (false);
    int xlen = snprintf(NULL, 0, "%d", x);
    char* str = calloc(xlen + 1, sizeof(char));
    snprintf(str, xlen + 1, "%d", x);
    for (int i = 0; i < xlen; i++, xlen--)
        if (str[i] != str[xlen - 1])
            return (false);
    return (true);
}