#include "monty.h"
/**
 * pop - prints the top
 * @head: stack head
 * @line_num: line number in input file.
 * Return: no return
*/

void pop(stack_t **head, unsigned int line_num)
{
	stack_t *temp_h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		fclose(locat.file);
		free(locat.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp_h = *head;
	*head = temp_h->next;
	free(temp_h);
}
