#include <stdio.h>

void delete(char word[31], char find[31], char val)
{
    for (int i = 0; i < 31; i++)
    {
        if (word[i] == '@' || word[i] == '\0')
            continue;
        if (word[i] == val)
        {
            word[i] = '@';
            break;
        }
    }
}

int compare(char word[31], char find[31])
{
    int i = 0, c = 0, ans = 0;
    while (i + c < 31)
    {
        if (word[i + c] == '@' || word[i + c] == '\0')
        {
            c++;
            continue;
        }
        if (word[i + c] == find[i])
        {
            i++;
            ans++;
            continue;
        }
        i++;
    }
    return ans;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char word[31], find[31];
        int wordcount[26], findcount[26];
        for (int i = 0; i < 31; i++)
        {
            word[i] = '@';
            find[i] = '@';
            if (i < 26)
                wordcount[i] = findcount[i] = 0;
        }
        scanf(" %s",word);
        scanf(" %s",find);
        for (int i = 0; i < 31; i++)
        {
            if (word[i] != '@' && word[i] != '\0')
            {
                wordcount[word[i] - 'A']++;
            }
            if (find[i] != '@' && find[i] != '\0')
            {
                findcount[find[i] - 'A']++;
            }
        }
        int total = 0;
        for (int i = 0; i < 26; i++)
        {
            total = total + findcount[i];
        }
        for (int i = 0; i < 26; i++)
        {
            int c = wordcount[i] - findcount[i];
            for (int j = 0; j < c; j++)
            {
                delete(word, find, 'A' + i);
            }
        }
        int ans = compare(word, find);
        if (ans == total)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}