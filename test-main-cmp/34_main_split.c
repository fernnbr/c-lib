#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char **result;
    size_t i;

    // Test 1
    result = ft_split("Hello World", ' ');
    i = 0;
    while (result[i])
    {
        printf("Word %zu: '%s'\n", i, result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    // Test 2
    result = ft_split("   Split   this   string   ", ' ');
    i = 0;
    while (result[i])
    {
        printf("Word %zu: '%s'\n", i, result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    // Test 3
    result = ft_split("One,Two,Three", ',');
    i = 0;
    while (result[i])
    {
        printf("Word %zu: '%s'\n", i, result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    // Test 4
    result = ft_split("", ' ');
    if (result && result[0] == NULL)
        printf("Empty string gives empty result array\n");
    free(result);

    return 0;
}


//The Tests

//Test normal splitting ("Hello world 42 school libft")
//Test multiple consecutive delimiters ("one,,two,,,three")
//Print each split word

//The Output

//Test 01 
//Word 0: 'Hello'
//Word 1: 'World'

//Test 02:
//Word 0: 'Split'
//Word 1: 'this'
//Word 2: 'string'

//Test 03: 
//Word 0: 'One'
//Word 1: 'Two'
//Word 2: 'Three'

//Test 04:
//Empty string gives empty result array
