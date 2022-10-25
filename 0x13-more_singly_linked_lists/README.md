# 0x13. C - More singly linked lists

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A README.md file, at the root of the folder of the project
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`
- Don’t forget to push your header file
- All your header files should be include guarded


## Betty linter
To run the Betty linter just with command `betty <filename>`:
- Go to the [Betty](https://alx-intranet.hbtn.io/rltoken/wQ4sMfsWfxvyfN67Sc11zA) repository
- Clone the [repo](https://alx-intranet.hbtn.io/rltoken/wQ4sMfsWfxvyfN67Sc11zA) to your local machine
- `cd` into the Betty directory
- Install the linter with `sudo ./install.sh`
- `emacs` or `vi` a new file called `betty`, and copy the script below:
```
  #!/bin/bash
  # Simply a wrapper script to keep you from having to use betty-style
  # and betty-doc separately on every item.
  # Originally by Tim Britton (@wintermanc3r), multiargument added by
  # Larry Madeo (@hillmonkey)
  
  BIN_PATH="/usr/local/bin"
  BETTY_STYLE="betty-style"
  BETTY_DOC="betty-doc"
  
  if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
  fi
  
  for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
  done
```
- Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
- Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`
You can now type `betty <filename>` to run the Betty linter!


## More Info
Please use this data structure for this project:
```
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

# Tasks
### 0. Print list
Write a function that prints all the elements of a `listint_t`list.
- Prototype: size_t `print_listint(const listint_t *h);`
- Return: the number of nodes
- Format: see example
- You are allowed to use `printf`
- File: `0-print_listint.c`

### 1. List length
Write a function that returns the number of elements in a linked `listint_t` list.
- Prototype: `size_t listint_len(const listint_t *h);`
- File: `1-listint_len.c`

### File: 1-listint_len.c
Write a function that adds a new node at the beginning of a `listint_t` list.
- Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed
- File: `2-add_nodeint.c`

### 3. Add node at the end
Write a function that adds a new node at the end of a `listint_t` list.
- Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed
- File: `-add_nodeint_end.c`

### 4. Free list
Write a function that frees a `listint_t` list.
- Prototype: `void free_listint(listint_t *head);`
- File: `4-free_listint.c`

### 5. Free
Write a function that frees a `listint_t` list.
- Prototype: `void free_listint2(listint_t **head);`
- he function sets the `head` to `NULL`
- File: `5-free_listint2.c`

### 6. Pop
Write a function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).
- Prototype: `int pop_listint(listint_t **head);`
- if the linked list is empty return `0`
- File: `6-pop_listint.c`

### 7. Get node at index
Write a function that returns the nth node of a `listint_t` linked list.
- Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
- where index is the `index` of the node, starting at `0`
- if the node does not exist, return `NULL`
- File: `-get_nodeint.c`

### 8. Sum list
Write a function that returns the sum of all the data (n) of a `listint_t` linked list.
- Prototype: `int sum_listint(listint_t *head);`
- if the list is empty, return `0`
- File: `8-sum_listint.c`

### 9. Insert
Write a function that inserts a new node at a given position.
- Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
- where `idx` is the index of the list where the new node should be added. Index starts at `0`
- Returns: the address of the new node, or `NULL` if it failed
- if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`
- File: `9-insert_nodeint.c`

### 10. Delete at index
Write a function that deletes the node at index `index` of a `listint_t` linked list.
- Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
- where `index` is the index of the node that should be deleted. Index starts at `0`
- Returns: `1` if it succeeded, `-1` if it failed
- File: `10-delete_nodeint.c`

### 11. Reverse list
Write a function that reverses a `listint_t` linked list.
- Prototype: `listint_t *reverse_listint(listint_t **head);`
- Returns: a pointer to the first node of the reversed list
- You are not allowed to use more than `1` loop.
- You are not allowed to use `malloc`, `free` or arrays
- You can only declare a maximum of two variables in your function
- File: `100-reverse_listint.c`

### 12. Print (safe version)
Write a function that prints a `listint_t` linked list.
- Prototype: `size_t print_listint_safe(const listint_t *head);`
- Returns: the number of nodes in the list
- This function can print lists with a loop
- You should go through the list only once
- If the function fails, exit the program with status `98`
- Output format: see example
- File: `101-print_listint_safe.c`

### 13. Free (safe version)
Write a function that frees a `listint_t` list.
- Prototype: `size_t free_listint_safe(listint_t **h);`
- This function can free lists with a loop
- You should go though the list only once
- Returns: the size of the list that was free’d
- The function sets the `head` to `NULL`
- File: `102-free_listint_safe.c`

### 14. Find the loop
Write a function that finds the loop in a linked list.
- Prototype: `listint_t *find_listint_loop(listint_t *head);`
- Returns: The address of the node where the loop starts, or `NULL` if there is no loop
- You are not allowed to use `malloc`, `free` or arrays
- You can only declare a maximum of two variables in your function
- File: `103-find_loop.c`
