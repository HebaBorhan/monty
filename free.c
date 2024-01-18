#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "monty.h"
/**
* free_stack - function that  frees a list list_t
* at the end of a stack_t list
* @head: pointer to the head of the linked list
* Return: void
*/
void free_stack(stack_t *head)
{
stack_t *temp;
while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}