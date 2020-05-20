#include "monty.h"
/**
 * swap_me - swap top two elements of the stack
 * @stack: double pointer to the first elm of stack
 * @ln: line number of current operation
 *
 * Return: void
 */
void swap_me(stack_t **stack, unsigned int ln)
{
	stack_t *temp1 = NULL;
	stack_t *temp2 = NULL;

	if ((*head) == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line);
		before_exit();
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next->next == NULL)
	{
		*stack = (*stack)->next;
		return;
	}

	temp1 = *stack;
	temp 2 = (*stack)->next;
	temp1->next = temp2->next;
	temp1->prev = temp2;
	temp2->next = temp1;
	temp2->prev = NULL;
	*head = temp2;
}

