#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t linked list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head, *temp;
    unsigned int i = 0;

    if (current == NULL)
        return -1;

    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return 1;
    }

    while (current != NULL)
    {
        if (i == index - 1)
        {
            temp = current->next;
            if (temp != NULL)
            {
                current->next = temp->next;
                if (temp->next != NULL)
                    temp->next->prev = current;
                free(temp);
                return 1;
            }
        }

        i++;
        current = current->next;
    }

    return -1;
}
