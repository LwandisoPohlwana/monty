#include "monty.h"
/**
  *rotl- rotates the stack to the top
  *@head: stack head
  *@line_num: line in input file
  *Return: no return
 */

void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int line_num)
{
	stack_t *tmp = *head, *new_h;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	new_h = (*head)->next;
	new_h->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = new_h;
}
