

bool isValid(char *s)
{
    int slen = strlen(s), j = 0;
    if (slen == 1 || slen % 2)
        return (false);
    char* stack = calloc(slen + 1, sizeof(char));
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            stack[j++] = s[i];
        else if (j == 0)
            return (false);
        else if ((s[i] == ')' && stack[j - 1] == '(') || \
                 (s[i] == '}' && stack[j - 1] == '{') || \
                 (s[i] == ']' && stack[j - 1] == '['))
            j--;
        else
            return (false);
    }
    if (j)
        return (false);
    return (true);
}