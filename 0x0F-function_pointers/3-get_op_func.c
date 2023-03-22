#include "function_pointers.h"

/**
 * get_op_func - function that selects the correct function to
 * perform the operation based on the operator passed as argument
 * @s: the operator passed as argument
 *
 * Return: pointer to the desired function
 */
int (*get_op_func(char *s))(int, int)
{

