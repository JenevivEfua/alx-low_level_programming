TASK 0: Write a function that prints all the elements of a dlistint_t list. Prototype: size_t print_dlistint(const dlistint_t *h); Return: the number of nodes



TASK 1: Write a function that returns the number of elements in a linked dlistint_t list. Prototype: size_t dlistint_len(const dlistint_t *h);

 

TASK 2: Write a function that returns the number of elements in a linked dlistint_t list. Prototype: size_t dlistint_len(const dlistint_t *h);



TASK 3; Write a function that adds a new node at the end of a dlistint_t list. Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n); Return: the address of the new element, or NULL if it failed



 TASK 4: Write a function that frees a dlistint_t list. Prototype: void free_dlistint(dlistint_t *head);



 TASK 5: Write a function that returns the nth node of a dlistint_t linked list. Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index) where index is the index of the node, starting from 0. if the node does not exist, return NULL



 TASK 6: Write a function that returns the sum of all the data (n) of a dlistint_t linked list. Prototype: int sum_dlistint(dlistint_t *head); if the list is empty, return 0



 TASK 7: Write a function that inserts a new node at a given position. Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n); where idx is the index of the list where the new node should be added. Index starts at 0. Returns: the address of the new node, or NULL if it failed; if it is not possible to add the new node at index idx, do not add the new node and return NULL



TASK 8: Write a function that deletes the node at index index of a dlistint_t linked list. Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index); where index is the index of the node that should be deleted. Index starts at 0. Returns: 1 if it succeeded, -1 if it failed



TASK 9: Find the password for crackme4. The password is saved in the file 100-password. The file should contain the exact password, no new line, no extra space; Hint: The program prints “OK” when the password is correct



TASK 10: A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99. Find the largest palindrome made from the product of two 3-digit numbers. The result is saved in the file 102-result. The file should contain the exact result, no new line, no extra space



TASK 11: Write a keygen for crackme5. Usage of the crackme: ./crackme5 username key .The crackme will segfault if you do not enter the correct key for the user. Usage for your keygen: ./keygen5 username . The keygen should print a valid key for the username
