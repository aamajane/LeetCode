

bool isPalindrome(int x)
{
    if (x < 0)
        return (false);
    int len = snprintf(NULL, 0, "%d", x);
    char* str = calloc(len + 1, sizeof(char));
    snprintf(str, len + 1, "%d", x);
    for (int i = 0; i < len; i++, len--)
        if (str[i] != str[len - 1])
            return (false);
    return (true);
}