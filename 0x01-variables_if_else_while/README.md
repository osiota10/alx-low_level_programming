# 0x01. C - Variables, if, else, while

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A README.md file, at the root of the folder of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use `system`
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)


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
### 0. Positive anything is better than negative nothing
This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.
- You can find the source code [here](https://alx-intranet.hbtn.io/rltoken/rrqNDWjrCWdARnWFLPExPw)
- The variable `n` will store a different value every time you will run this program
- You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
- The output of the program should be:
  - The number, followed by
    - if the number is greater than 0: `is positive`
    - if the number is 0: `is zero`
    - if the number is less than 0: `is negative`
  - followed by a new line
 - File: `0-positive_or_negative.c`


### 1. The last digit
This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.
- You can find the source code [here](https://alx-intranet.hbtn.io/rltoken/5HWhPDsq3jq1yCRQFrLl4Q)
- The variable `n` will store a different value every time you run this program
- You don’t have to understand what `rand`, `srand`, and `RAND_MAX` do. Please do not touch this code
- The output of the program should be:
  - The string `Last digit of`, followed by
  - `n`, followed by
  - the string `is`, followed by
    - if the last digit of `n` is greater than 5: the string `and is greater than 5`
    - if the last digit of `n` is 0: the string `and is 0`
    - if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
  - followed by a new line
- File: `1-last_digit.c`

### 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
Write a program that prints the alphabet in lowercase, followed by a new line.
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code
- File: `2-print_alphabet.c`

### 3. alphABET
Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` three times in your code
- File: `3-print_alphabets.c`

### 4. When I was having that alphabet soup, I never thought that it would pay off
Write a program that prints the alphabet in lowercase, followed by a new line.
- Print all the letters except `q` and `e`
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code
- File: `4-print_alphabt.c`


### 5. Numbers
Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.
- All your code should be in the `main` function
- File: `5-print_numbers.c`

### 6. Numberz
Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.
- You are not allowed to use any variable of type `char`
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` twice in your code
- All your code should be in the `main` function
- File: `6-print_numberz.c`


### 7. Smile in the mirror
Write a program that prints the lowercase alphabet in reverse, followed by a new line.
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code
- File: `7-print_tebahpla.c`


### 8. Hexadecimal
Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` three times in your code
- File: `8-print_base16.c`


### 9. Patience, persistence and perspiration make an unbeatable combination for success
Write a program that prints all possible combinations of single-digit numbers.
- Numbers must be separated by `,`, followed by a space
- Numbers should be printed in ascending order
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` four times maximum in your code
- You are not allowed to use any variable of type `char`
- File: `9-print_comb.c`


### 10. Inventing is a combination of brains and materials. The more brains you use, the less material you need
Write a program that prints all possible different combinations of two digits.
- Numbers must be separated by `,`, followed by a space
- The two digits must be different
- `01` and `10` are considered the same combination of the two digits `0` and `1`
- Print only the smallest combination of two digits
- Numbers should be printed in ascending order, with two digits
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` five times maximum in your code
- You are not allowed to use any variable of type `char`
- All your code should be in the `main` function
- File:`100-print_comb3.c`


### 11. The success combination in business is: Do what you do better... and: do more of what you do...
Write a program that prints all possible different combinations of three digits.
- Numbers must be separated by `,`, followed by a space
- The three digits must be different
- `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits `0`, `1` and `2`
- Print only the smallest combination of three digits
- Numbers should be printed in ascending order, with three digits
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` six times maximum in your code
- You are not allowed to use any variable of type `char`
- All your code should be in the `main` function
- File: `101-print_comb4.c`


### 12. Software is eating the World
Write a program that prints all possible combinations of two two-digit numbers.
- The numbers should range from `0` to `99`
- The two numbers should be separated by a space
- All numbers should be printed with two digits. `1` should be printed as `01`
- The combination of numbers must be separated by comma, followed by a space
- The combinations of numbers should be printed in ascending order
- `00 01` and `01 00` are considered as the same combination of the numbers `0` and `1`
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` eight times maximum in your code
- You are not allowed to use any variable of type `char`
- All your code should be in the `main` function
- File: `102-print_comb5.c`

