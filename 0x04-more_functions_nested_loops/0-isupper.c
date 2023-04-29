#include "main.h"
/**
* _isupper - check if a letter is uppercase character
* @y: Variable text
* Return: Always 0.
*/
int _isupper(int y)
{
	if (y >= 'A' && y <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
