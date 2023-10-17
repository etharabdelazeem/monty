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
	/*declerations*/

	/*code*/
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	/*execution loop */

	/*free and close*/
	fclose(file);
	
	return (0);
}
