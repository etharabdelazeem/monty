#include "monty.h"

void mallocerror(void)
{
	printf("Malloc error");
	exit(0);
}

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
