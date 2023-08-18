#include "main.h"

/**
* _abs - functoon to find absolute value of a number
* @a: function parameter
* Return: -a or a;
*/

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
