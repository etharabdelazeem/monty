#include "monty.h"

/**
 * queue - sets the mode to queue\ changes the sq_flag
 * @stack: head of the linked list
 * @linecount: the linecounter
 *
 * Return: nothing
 */
void queue(stack_t **stack, unsigned int linecount)
{
	(void)stack;
	(void)linecount;

	data.sq_flag = 1;
}

/**
 * push_queue - pushes in a queue mode
 * @head: head of the linked list
 *
 * Return: nothing
 */
void push_queue(stack_t **head)
{
	stack_t *new, *tmp = *head;

	new = malloc(sizeof(stack_t));

	if (!new)
		mallocerror();

	new->n = atoi(data.arg);
	new->next = NULL;
	if (tmp)
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
	}
	if (!tmp)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = tmp;
		tmp->next = new;
	}

}
