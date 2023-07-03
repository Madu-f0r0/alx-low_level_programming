Project 0x12. C - Singly linked lists is an introduction to linked lists as a data structure. For this project, the focus is on singly linked lists.

A struct is declared (with alias list_t) which contains a char * and an unsigned int(the length of the string in the first element of the struct) as the data segment of each node, while the last element of the struct, a pointer to a list_t(pointer to the next node of te list), is the link segment of each node.

- Task 0 requires for a function to be written which prints all the elements of a list_t list
- Task 1 returns the number of elements(nodes) in a list_t list
- Task 2 adds a new node at the beginning of a list_t list
- Task 3 adds a new node at te end of a list_t list
- Task 4 frees a list_t list
