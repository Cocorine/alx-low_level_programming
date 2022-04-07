
# 0x00. C - Hello, World
Low level programming with C

### About C programming
### 

### 
#### Script that runs a C file through the preprocessor and save the result into another file.
> gcc $CFILE -E -o c

### 
#### Script that compiles a C file but does not link.
> gcc -c $CFILE

### 
#### Script that generates the assembly code of a C code and save it in an output file.
> gcc -S $CFILE

### 
#### Script that generates the assembly code of a C code and save it in an output file.
> gcc -S $CFILE

### 
#### Script that compiles a C file and creates an executable named cisfun
> gcc $CFILE -o cisfun


### 
#### A C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
```
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
```
