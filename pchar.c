#include "monty.h"
/**
 * pchar - prints the char at the top of the stack,
 * followed with new line
 * @head: stack head
 * @line_num: line number in input file.
 * Return: no return
*/
void pchar(stack_t **head, unsigned int line_num)
{
	stack_t *tmp_h;

	tmp_h = *head;
	if (!tmp_h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_num);
		fclose(locat.file);
		free(locat.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (tmp_h->n > 127 || tmp_h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_num);
		fclose(locat.file);
		free(locat.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", tmp_h->n);
}
