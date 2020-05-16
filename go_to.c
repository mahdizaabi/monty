#include "monty.h"
/**
* go_to- bridge to the stack operations
* @stack: pointer to the struct
* @ln: line number
* Return: void
*/
void go_to(stack_t **stack, unsigned int ln)
{
	unsigned int i;
	char *tryr;

	instruction_t opst[] = {
				{"push", push_me},
				{"pall", pall_me},
				{"pint", pint_me},
				{"pop", pop_me},
				{NULL, NULL}
				};

	tryr = strtok(varx.buffer, " \n\t\a");
	i = 0;
	while (tryr != NULL && opst[i].opcode != NULL)
	{
		if (strcmp(opst[i].opcode, tryr) == 0)
		{
			opst[i].f(stack, ln);
			return;
		}
		i++;
	}
	if (tryr == NULL || opst[i].opcode == NULL)

		fprintf(stderr, "L%d: unknown instruction %s\n", ln, tryr);
		clean_stack(*stack);
		clean_all();

		exit(EXIT_FAILURE);
}
