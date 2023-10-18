#include "monty.h"

data_t data = {NULL, NULL, NULL};

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
	char *line;
	size_t size = 0;
	ssize_t r = 1;

	/*stack = malloc(sizeof(stack_t));
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
	data.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	/*execution loop */
	while (r > 0)
	{
		line = NULL;
		r = getline(&line, &size, file);
		linecount++;
		data.line = line;
		if (r > 0)
			execute(file, &stack, linecount, line);
		free(line);
	}
	/*free and close*/
	fclose(file);

	return (0);
}
