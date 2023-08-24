#include "monty.h"
/**
 * pint - prints the top
 * @head: stack head
 * @line_num: line number in input file.
 * Return: no return
*/

void pint(stack_t **head, unsigned int line_num)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
		fclose(locat.file);
		free(locat.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
