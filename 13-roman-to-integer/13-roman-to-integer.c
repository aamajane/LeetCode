

int romanToInt(char *s)
{
    int res = 0;
    while (*s)
    {
        if (*s == 'C' && *(s + 1) == 'M' && s++)
            res += 900;
        else if (*s == 'M')
            res += 1000;
        else if (*s == 'C' && *(s + 1) == 'D' && s++)
            res += 400;
        else if (*s == 'D')
            res += 500;
        else if (*s == 'X' && *(s + 1) == 'C' && s++)
            res += 90;
        else if (*s == 'C')
            res += 100;
        else if (*s == 'X' && *(s + 1) == 'L' && s++)
            res += 40;
        else if (*s == 'L')
            res += 50;
        else if (*s == 'I' && *(s + 1) == 'X' && s++)
            res += 9;
        else if (*s == 'X')
            res += 10;
        else if (*s == 'I' && *(s + 1) == 'V' && s++)
            res += 4;
        else if (*s == 'V')
            res += 5;
        else if (*s == 'I')
            res += 1;
        s++;
    }
    return (res);
}