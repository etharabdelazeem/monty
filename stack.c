#include "monty.h"

/**
 * mallocerror - prints error message
 * Return: nothing
 */
void mallocerror(void)
{
	printf("Malloc error");
	exit(0);
}

/**
 * push_stack - push int to the stack
 * @head: the stack head
 */
void push_stack(stack_t **head)
{
	stack_t *new, *temp = *head;

	new = malloc(sizeof(stack_t));
	if (!new)
		mallocerror();
	if (temp)
		temp->prev = new;
	new->n = atoi(data.arg);
	new->next = temp;
	new->prev = NULL;
	*head = new;
}
