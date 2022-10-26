# 0x0E. C - Structures, typedef


## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A README.md file, at the root of the folder of the project
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `printf`, `malloc`, `free` and `exit`.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
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


# Tasks
### 0. Poppy
Define a new type `struct dog` with the following elements
- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *`
- File: `dog.h`

### 1. A dog is the only thing on earth that loves you more than you love yourself
Write a function that initialize a variable of type `struct dog`
- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`
- File: `1-init_dog.c`


### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
Write a function that prints a `struct dog`
- Prototype: `void print_dog(struct dog *d);`
- Format: see example below
- You are allowed to use the standard library
- If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
- If `d` is `NULL` print nothing.
- File: `2-print_dog.c`


### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
Define a new type `dog_t` as a new name for the type `struct dog`
- File: `dog.h`

### 4. A door is what a dog is perpetually on the wrong side of
Write a function that creates a new dog
- Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
- You have to store a copy of `name` and `owner`
- Return `NULL` if the function fails
- File: `4-new_dog.c`


### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
Write a function that frees dogs.
- Prototype: `void free_dog(dog_t *d);`
- File: `5-free_dog.c`



