#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 *
 * @size: integer parameter
 * @c: character parameter
 *
 * Return: return NULL if 0, result if successful
 *
 */

char *create_array(unsigned int size, char c)
{
        int counter;
        char *snd;

        snd = malloc(sizeof(char) * size);

        if (size == 0)
        {
            return(NULL);
        }

        while (counter < size)
        {
            snd[counter] = c;
            printf("%c", snd[counter]);
        }
        return (snd);
}
