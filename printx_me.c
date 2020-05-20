#include "monty.h"

/**
 * printx_me - prints the string starting at the top of the stack
 * @stack: pointer to the struct
 * @ln : line numbers
 * Return: void
**/

void printx_me(stack_t **stack, unsigned int ln)
{
	(void) ln;

	if ((*stack) == NULL || *stack == NULL)
	{
		printf("\n");
	}

	while ((*stack)->next != NULL)
	{
		if ((*stack)->n <= 0 || (*stack)->n > 127)
			break;
		printf("%c", (*stack)->n);
		*stack = (*stack)->next;
	}
	printf("\n");
}


