#include "monty.h"

data_t data = {NULL, NULL, NULL, 0};

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
	stack_t *stack = NULL;
	char *line;
	size_t size = 0;
	ssize_t r = 1;

	/*code*/
	check_usage(argc);
	get_file(argv[1]);

	/*execution loop */
	while (r > 0)
	{
		line = NULL;
		r = getline(&line, &size, data.file);
		linecount++;
		data.line = line;
		if (r > 0)
			execute(data.file, &stack, linecount, line);
		free(line);
	}
	freestack(stack);
	fclose(data.file);
	return (0);
}
