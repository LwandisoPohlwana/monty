#include "monty.h"
/**
 * push - add node to the stack
 * @head: stack head
 * @line_num: line number in input file.
 * Return: no return
*/
void push(stack_t **head, unsigned int line_num)
{
	int n, v = 0, flag = 0;

	if (locat.arg)
	{
		if (locat.arg[0] == '-')
			v++;
		for (; locat.arg[v] != '\0'; v++)
		{
			if (locat.arg[v] > 57 || locat.arg[v] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", line_num);
			fclose(locat.file);
			free(locat.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", line_num);
		fclose(locat.file);
		free(locat.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(locat.arg);
	if (locat.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}

