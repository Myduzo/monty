#include "monty.h"
/**
 * _free - function that frees nodes
 * @head : the head node
 */
void _free(stack_t *head)
{
	stack_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

/**
 * _isdigit - tests if the char is an integer or not
 * @str : string
 * Return: 1 if char or 0 if number
 */
int _isdigit(char *str)
{
	int x = 0;

	if (str[0] == '-')
		x++;

	while (str[x])
	{
		if (str[x] >= '0' && str[x] <= '9')
			x++;
		else
			return (1);
	}
	return (0);
}
