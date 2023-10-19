#ifndef _MONTY_H_
#define _MONTY_H_

#define  _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>

#define BUFFER 1024

/*  Structs  */
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct data_s - holds values of file, content of line
 * @arg: value
 * @file: pointer to monty file
 * @line: line content
 * @
 */
typedef struct data_s
{
	char *arg;
	FILE *file;
	char *line;
	/*int lifi;*/
}  data_t;
extern data_t data;

/*  ================== Functions ===================  */

/* helpers_main.c */
void check_usage(int argc);

/* helpersmain_fe.c */
void get_file(char *file_name);
void file_open_error(char *file_name);


void pop(stack_t **stack, unsigned int linecount);
void add(stack_t **stack, unsigned int linecount);
void swap(stack_t **stack, unsigned int linecount);
int execute(FILE *file, stack_t **stack, unsigned int count, char *line);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void push_stack(stack_t **head);
void freestack(stack_t *head);
void pint(stack_t **stack, unsigned int linecount);
void nop(stack_t **stack, unsigned int linecount);

#endif
