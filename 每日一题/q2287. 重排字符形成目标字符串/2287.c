int rearrangeCharacters(char *s, char *target)
{
    int d_s[26];
    int d_target[26];
    for (int i = 0; i < 26; i++)
    {
        d_s[i] = 0;
        d_target[i] = 0;
    }
    // printf("%d\n", strlen(s));
    for (int i = 0; i < strlen(s); i++)
    {
        d_s[s[i] - 'a']++;
    }
    for (int i = 0; i < strlen(target); i++)
    {
        d_target[target[i] - 'a']++;
    }

    // for (int i = 0; i < 26; i++)
    // {
    //     printf("The %d th for s is %d, for target is %d\n", i, d_s[i], d_target[i]);
    // }

    int count = strlen(s) + strlen(target);
    for (int i = 0; i < 26; i++)
    {
        // printf("%d\n", i, d_target[i]);
        if (d_target[i] != 0)
        {
            // printf("Yes, %d\n", i);
            int c = d_s[i] / d_target[i];
            printf("%d\n", c);
            if (c < count)
                count = c;
        }
    }
    return count;
}

void main()
{
    char s1[] = "ilovecodingonleetcode";
    char target1[] = "code";
    printf("%d", rearrangeCharacters(&s1, &target1));
}