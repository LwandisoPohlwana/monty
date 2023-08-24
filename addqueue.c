#include "monty.h"
/**
 * addqueue - Add a new node to the end of the queue.
 * @head: Pointer to the head of the queue.
 * @n: Value to be added to the new node.
 * Return: No return value.
 */

void addqueue(stack_t **head, int n)
{
    stack_t *new_node, *current;

    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        return;
    }

    current = *head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = new_node;
    new_node->prev = current;
}
