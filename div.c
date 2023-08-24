#include "monty.h"
/**
 * divid - divides the top two elements of the stack.
 * @head: stack head
 * @line_num: line number in input file.
 * Return: no return
*/

void divid(stack_t **head, unsigned int line_num)
{
	stack_t *tmp_h ;
	int length = 0, temp;

	tmp_h = *head;
	while (tmp_h)
	{
		tmp_h = tmp_h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_num);
		fclose(locat.file);
		free(locat.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp_h = *head;
	if (tmp_h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_num);
		fclose(locat.file);
		free(locat.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = tmp_h->next->n / tmp_h->n;
	tmp_h->next->n = temp;
	*head = tmp_h->next;
	free(tmp_h);
}
