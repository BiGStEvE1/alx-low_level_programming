#include "main.h"

/**
* _isupper - Checks if a character is uppercase.
* @c: The character to be checked.
*
* Return: If the character is uppercase, returns 1. Otherwise, returns 0.
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
