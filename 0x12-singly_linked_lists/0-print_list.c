#include "lists.h"

size_t print_list(const list_t *h)
{
size_t nelem = 0;  // Initialize the count of elements to 0
while (h)  // Use implicit comparison to NULL, same as h != NULL
{
if (h->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
nelem++;  // Increment the count of elements
}
return nelem;  // Return the count of elements
}
