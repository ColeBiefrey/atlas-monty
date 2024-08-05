#include "monty.h"

/**
 * _add - adds top two elements of stack
 * @doubly: head of linked list
 * @cline: line num
 * Return: no return
 */

void _add(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't add, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n += (*doubly)->n;
	_pop(doubly, cline);
}

/**
 * _nop - doesn't do anythin'
 * @doubly: head of linked list
 * @cline: line number
 * Return: no return
 */

void _nop(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;
}
