#include "monty.h"

/**
 * check_usage - validates the number of cmd arguments
 * @argc: ARGUMENT COUNT
 *
 * Return: nothing if argc = 2 and exits with
 * failure other wise
 */
void check_usage(int argc)
{
	if (argc == 2)
		return;

	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
