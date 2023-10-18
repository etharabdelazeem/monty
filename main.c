#include "monty.h"

/**
 * main - monty code interpreter
 * @argc: number of arguments
 * @argv: vector of arguments
 *
 * Return: 0 upon success
 */
int main(int argc, char *argv[])
{
	unsigned int linecount = 0;
	FILE *file;
	stack_t *stack = NULL;
	char *content;
	size_t size = 0;
	ssize_t r = 0;

/*	stack = malloc(sizeof(stack_t));
	if (!stack)
	{
		printf("WRITE MALLOC ERROR TP STDERR");
		exit(EXIT_FAILURE);
	}*/
	/*code*/
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	printf("hello from main\n");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	printf("hi again\n");
	/*execution loop */
	r = getline(&content, &size, file);
	if (!r)
		printf("noo");
	linecount++;
	execute(file, &stack, linecount, content);
	/*free and close*/
	fclose(file);
	
	return (0);
}
