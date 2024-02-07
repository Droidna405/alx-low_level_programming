#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Count the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words
 */
int count_words(const char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str)
    {
        if (*str != ' ')
        {
            if (!in_word)
            {
                in_word = 1;
                count++;
            }
        }
        else
        {
            in_word = 0;
        }
        str++;
    }
    return count;
}

/**
 * strtow - Split a string into words
 * @str: The string to split
 *
 * Return: An array of words, or NULL if failed
 */
char **strtow(char *str)
{
int word_count, i;
char **words, *word;

if (str == NULL || *str == '\0')
return (NULL);

word_count = count_words(str);
if (word_count == 0)
return (NULL);

words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

i = 0;
while (*str)
{
if (*str != ' ')
{
word = str;
while (*str && *str != ' ')
str++;
words[i] = malloc((str - word + 1) * sizeof(char));
if (words[i] == NULL)
{
for (i = 0; i < word_count; i++)
free(words[i]);
free(words);
return (NULL);
}
strncpy(words[i], word, str - word);
words[i][str - word] = '\0';
i++;
}
else
{
str++;
}
}
words[word_count] = NULL;
return (words);
}
