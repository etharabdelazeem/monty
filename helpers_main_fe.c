#include "monty.h"

/**
 * file_open_error - file can't open
 * @file_name: the file that caused error
 *
 * Return: exit failure
 */
void file_open_error(char *file_name)
{
	fprintf(stderr, "Error: Can't open file %s\n", file_name);
	/*free_data();*/
	/*freestack(stack);*/
	exit(EXIT_FAILURE);
}

/**
 * get_file - store opened file to data struct
 * @file_name: name of the file to open and store
 *
 * Return: nothing or exit failure
 */
void get_file(char *file_name)
{
	data.file = fopen(file_name, "r");
	if (!(data.file))
		file_open_error(file_name);
}
