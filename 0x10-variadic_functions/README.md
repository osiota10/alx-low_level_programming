# 0x10. C - Variadic functions

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A README.md file, at the root of the folder of the project
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use the following macros: `va_start`, `va_arg` and `va_end`
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `variadic_functions.h`
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
### 0. Beauty is variable, ugliness is constant
Write a function that returns the sum of all its parameters.
- Prototype: `int sum_them_all(const unsigned int n, ...);`
- If `n == 0`, return `0`
- File: `0-sum_them_all.c`

### 1. To be is to be the value of a variable
Write a function that prints numbers, followed by a new line.
- Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
- where `separator` is the string to be printed between numbers
- and `n` is the number of integers passed to the function
- You are allowed to use `printf`
- If `separator` is `NULL`, don’t print it
- Print a new line at the end of your function
- File: `1-print_numbers.c`


### 2. One woman's constant is another woman's variable
Write a function that prints strings, followed by a new line.
- Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
- where `separator` is the string to be printed between the strings
- and `n` is the number of strings passed to the function
- You are allowed to use `printf`
- If separator is NULL, don’t print it
- If one of the string is NULL, print `(nil)` instead
- Print a new line at the end of your function
- File: `2-print_strings.c`


### 3. To be is a to be the value of a variable
Write a function that prints anything.
- Prototype: `void print_all(const char * const format, ...);`
- where format is a list of types of arguments passed to the function
  - `c: char`
  - `i: integer`
  - `f: float`
  - `s: char *` (if the string is NULL, print `(nil)` instead
  - any other char should be ignored
  - see example
- You are not allowed to use `for`, `goto`, ternary operator, `else`, `do ... while`
- You can use a maximum of
  - 2 `while` loops
  - 2 `if`
- You can declare a maximum of `9` variables
- You are allowed to use `printf`
- Print a new line at the end of your function
- File: `3-print_all.c`



