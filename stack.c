#include "monty.h"

void mallocerror(void)
{
	fprintf(stderr, "Malloc error\n");
	exit(EXIT_FAILURE);
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

void freestack(stack_t *head)
{
	stack_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
