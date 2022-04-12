

int romanToInt(char *s)
{
    int total = 0;
    while (*s)
    {
        if (*s == 'C' && *(s + 1) == 'M' && s++)
            total += 900;
        else if (*s == 'M')
            total += 1000;
        else if (*s == 'C' && *(s + 1) == 'D' && s++)
            total += 400;
        else if (*s == 'D')
            total += 500;
        else if (*s == 'X' && *(s + 1) == 'C' && s++)
            total += 90;
        else if (*s == 'C')
            total += 100;
        else if (*s == 'X' && *(s + 1) == 'L' && s++)
            total += 40;
        else if (*s == 'L')
            total += 50;
        else if (*s == 'I' && *(s + 1) == 'X' && s++)
            total += 9;
        else if (*s == 'X')
            total += 10;
        else if (*s == 'I' && *(s + 1) == 'V' && s++)
            total += 4;
        else if (*s == 'V')
            total += 5;
        else if (*s == 'I')
            total += 1;
        s++;
    }
    return (total);
}