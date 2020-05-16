#include "monty.h"
/**
 * pall_me - display the stack
 * @stack: pointer to the stack
 * @ln: line numbers
**/
void pall_me(stack_t **stack, unsigned int ln)
{
	stack_t *temp = *stack;
	(void)ln;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	free(temp);
	temp = NULL;
}
