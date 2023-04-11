#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
    int count = 0, is_word = 0;

    for (; *str != '\0'; str++)
    {
        if (*str != ' ' && is_word == 0)
        {
            count++;
            is_word = 1;
        }
        else if (*str == ' ')
            is_word = 0;
    }

    return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return:pointer of strings , or NULL if str is NULL or
 *         if memory allocation fails.
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return (NULL);

    int word_count = count_words(str);
    if (word_count == 0)
        return (NULL);

    char **words = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (words == NULL)
        return (NULL);

    int i, j = 0, len;
    int is_word = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && is_word == 0)
        {
            len = 0;
            int k = i;
            while (str[k] != ' ' && str[k] != '\0')
                len++, k++;

            words[j] = (char *)malloc(sizeof(char) * (len + 1));

            if (words[j] == NULL)
            {
                for (j = 0; j < i; j++)
                    free(words[j]);
                free(words);
                return (NULL);
            }

            strncpy(words[j], str + i, len);
            words[j][len] = '\0';

            j++;
            is_word = 1;
        }
        else if (str[i] == ' ')
            is_word = 0;
    }

    words[j] = NULL;

    return (words);
}
