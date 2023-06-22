# 0x0F. C - Function pointers

## Learning Objectives - General
 * What are function pointers and how to use them
 * What does a function pointer exactly hold
 * Where does a function pointer point to in the virtual memory

## Tasks 

### 0. What's my name
Write a function that prints a name.
 * Prototype: void print_name(char *name, void (*f)(char *));
 * File: 0-print_name.c

### 1. If you spend too much time thinking about a thing, you'll never get it done
Write a function that executes a function given as a parameter on each element of an array.
 * Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
 * File: 1-array_iterator.c

### 2. To hell with circumstances; I create opportunities
Write a function that searches for an integer.

 * prototype: int int_index(int *array, int size, int (*cmp)(int));
 * File: 2-int_index.c

### 3. A goal is not always meant to be reached, it often serves simply as something to aim at
Write a program that performs simple operations
 * File: 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h

### 4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker
Write a program that prints the opcodes of its own main function.
 * File: 100-main_opcodes.c
