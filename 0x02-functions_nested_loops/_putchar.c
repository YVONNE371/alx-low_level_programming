#include <unistd.h>

/**
 * 
 *
 *
 */

int _putchar(char myChar)
{
        return (write(1, &myChar, 1));
}
