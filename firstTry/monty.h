#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_t
{
        int n;
        struct stack_t *prev;
        struct stack_t *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_t
{
        char *opcode;
        void (*f)(stack_t **, unsigned int);
} instruction_t;

char *_strchr_(const char *, int);
char *_strstr_(const char *, const char *);
int _readfile_(char *);
int _readline_(char *);
char *_command_(const char *);
char * _value_(const char *, const unsigned int);
int _exe_(const char *, stack_t **, unsigned int);

void push(stack_t **, unsigned int);
void pall(stack_t **, unsigned int);
void free_struct(stack_t *);


/**
 * 0 - SUCCESS
 * 1 - CAN'T OPEN FILE
 * 2 - INVALID INSTRUCTION
 * 3 - MALLOC FAILED
 * 4 - L<line_number>: usage: push integer
 * 5 - pushing non-int
*/


#endif /*MONTY_H*/