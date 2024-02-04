#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function to
 * perform the operation asked by the user.
 * @s: The operator passed as argument.
 * Description: This function returns a pointer to the function that
 * corresponds to the operator given as a parameter.
 * Example: get_op_func("+") should return a pointer to the function op_add.
 *
 * Return: pointer to the coresponding function.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (s && s[0] == ops[i].op[0] && != s[1])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
