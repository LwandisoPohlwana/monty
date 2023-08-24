#include "monty.h"
/**
 * pall - prints the stack
 * @head: stack head
 * @line_num: not in use
 * Return: no return
*/

void pall(stack_t **head, unsigned int line_num)
{
	stack_t *temp_h;
	(void)line_num;

	temp_h = *head;
	if (temp_h == NULL)
		return;
	while (temp_h)
	{
		printf("%d\n", temp_h->n);
		temp_h = temp_h->next;
	}
}
