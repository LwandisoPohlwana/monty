#include "monty.h"
/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @line_num: line number in input file.
 * Return: no return
*/

void f_add(stack_t **head, unsigned int line_num)
{
	stack_t *temp_h;
	int length = 0, solu;

	temp_h = *head;
	while (temp_h)
	{
		temp_h = temp_h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		fclose(locat.file);
		free(locat.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp_h = *head;
	solu = temp_h->n + temp_h->next->n;
	temp_h->next->n = solu;
	*head = temp_h->next;
	free(temp_h);
}
