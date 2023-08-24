#include "monty.h"
/**
 * pstr - prints the string starting at the top of the stack,
 * followed with new
 * @head: stack head
 * @line_num: 
 * Return: no return
*/

void pstr(stack_t **head, unsigned int line_num)
{
	stack_t *tmp_h;
	(void)line_num;

	tmp_h = *head;
	while (tmp_h)
	{
		if (tmp_h->n > 127 || tmp_h->n <= 0)
		{
			break;
		}
		printf("%c", tmp_h->n);
		tmp_h = tmp_h->next;
	}
	printf("\n");
}
