# C - printf

## Description
Create an simple exact replica of the printf function found in the C programming language. Using Variadic functions, structs, and multiple helper functions, the program we created will be able display inputed characters, strings, integers, and decimals (base 10). Whatever format specifier you use with our `_prinf` function, should display the same results when used by the actual printf function. This project is to show an alternative method of creating your very own simple printf function in the C programming language.

If successfully compiled and executed, the function should return the number of characters printed (excluding the null byte used to end output to strings). And if it fails, then the function should return a `(-1)` upon error and `"(null)"` if the string argument takes in NULL. If the format specifier is unkown, then the output would print out the format specifier as a string.

The code was made to handle all the format specifiers, but because of the simplicity of our code, we only used 5 so far. In the future, we will update the printf repository to handle more format specifiers.

### Prototype
`int _printf(const char *format, ...)`

- Returns: the number of characters printed (excluding the null byte used to end output to strings).
- Write output to stdout, the standard output stream.
- `format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail.
### File Usage
File Name | Description
--- | ---
[_printf.c](https://github.com/tassavarat/printf/blob/master/_printf.c) | The main _prinf.c file is used to handle the array containing all the format specifiers used. As well as where the function starts to execute.
[_get_print.c](https://github.com/tassavarat/printf/blob/master/get_print.c) | Contains main body of our code that uses loops and if statements in order to execute the functions connected to the format specifiers. As well as testing for any test cases.
[helper_functions.c](https://github.com/tassavarat/printf/blob/master/helper_functions.c) | Is where we placed all the helper functions used within our code. Because of Holberton School's limit of 5 helper functions per file, any other helper function files we will make in the future will only contain a max limit of 5 or less.
[holberton.h](https://github.com/tassavarat/printf/blob/master/holberton.h) | The header file we used to contain all our the prototypes used as well as containing our struct and the standard libraries used.
[man_3_printf](https://github.com/tassavarat/printf/blob/master/man_3_printf) | The man page we created for our _printf function.
### Format Specifiers
The _printf program will replicate the effects of the listed % format specifiers as when used with printf.

Function name | Description | Format Specifier
--- | --- | ---
`_print_char` | Prints a single character | `%c`
`_print_string` | Prints a string of characters | `%s`
`_print_percent` | Prints a % | `%%`
`_print_int` | Prints an integer in base 10| `%d` & `%i`
### Compilation

Our code can be compiled in either example
```
$ gcc -Wall -Werror -Wextra -pedantic *.c
```
or (if you want to test for unknown format specifiers)

```
$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c
```
## Testing the Program

### The main.c File Test
You'll make a main.c file to test the program, in order to see if the custom _printf function works exactly like how regular printf manages to display the number of characters printed.
The main.c file should contain the code displayed below. (Feel free to change the code inside main.c to test for any other test cases not currently displayed.)
```
Timmy@ubuntu:~/c/printf$ cat main.c
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```
### Output Check
Your output should after compiling the program should look something like what's displayed below.
```
Timmy@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
Timmy@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
Timmy@ubuntu:~/c/printf$
```
### Bugs
It should be noted that our code does not handle the following conditions:
* You don’t have to reproduce the buffer handling of the C library printf function.
* You don’t have to handle the flag characters.
* You don’t have to handle field width.
* You don’t have to handle precision.
* You don’t have to handle the length modifiers.
### About
All files were created and compiled on `Ubuntu 14.04.4 LTS` using `GCC 4.8.4`
## Authors
* **Tim Assavarat** - [tassavarat](https://github.com/tassavarat)
* **Jun Zhu** - [VieetBubbles](https://github.com/VieetBubbles)
## Acknowledgments
Marc Cavigli, Kenneth Mensah