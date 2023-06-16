#include <stdio.h>
#include "your_header_file.h" // Replace with the appropriate header file

size_t print_dlistint(const dlistint_t *h) {
    const dlistint_t *current = h;
    size_t count = 0;

    while (current != NULL) {
        printf("%d\n", current->n);
        current = current->next;
	count++;
	}

	return count;
}
