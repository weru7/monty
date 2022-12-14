#ifndef MONTY_HEADERS

#define MONTY_HEADERS



#include <stdio.h>

#include <fcntl.h>

#include <stdlib.h>

#include <unistd.h>

#include <string.h>

#include <ctype.h>



#endif /* MONTY_HEADERS */



#ifndef MONTY_STRUCT

#define MONTY_STRUCT



/* STRUCT #1 */



/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct stack_s

{

		int n;

			struct stack_s *prev;

				struct stack_s *next;

} stack_t;



/* STRUCT #2 */



/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */

typedef struct instruction_s

{

		char *opcode;

			void (*f)(stack_t **stack, unsigned int line_number);

} instruction_t;



#endif /* MONTY_STRUCT */



#ifndef VALIDATOR

#define VALIDATOR



/**
 * struct validator - return value of opcode and if list is stack or queue
 * @opcode: return value of opcode
 * @queue_value: 1 if list is a queue, 0 if list is a stack
 */



typedef struct validator

{

		int opcode;

			int queue_value;

} validator_t;



extern validator_t rq;



#endif /* VALIDATOR */



#ifndef FUNCTIONS

#define FUNCTIONS



char *find_co(char *line, stack_t **stack, unsigned int n_line);

int isnumber(char *str);

void add_node(stack_t **stack, int value);

void add_node_end(stack_t **stack, int value);

int check_opcode(char *command, stack_t **stack, size_t n_line);

void kill_free(char *line, FILE *file, stack_t *stack);

void kill_stack(stack_t *stack);

void pall(stack_t **stack, unsigned int n_line);

void pint(stack_t **stack, unsigned int n_line);

void pop(stack_t **stack, unsigned int n_line);

void swap(stack_t **stack, unsigned int n_line);

void _div(stack_t **stack, unsigned int n_line);

void add(stack_t **stack, unsigned int n_line);

void sub(stack_t **stack, unsigned int n_line);

void mul(stack_t **stack, unsigned int n_line);

void mod(stack_t **stack, unsigned int n_line);

void pchar(stack_t **stack, unsigned int n_line);

void rotl(stack_t **stack, unsigned int n_line);

void pstr(stack_t **stack, unsigned int n_line);

void rotr(stack_t **stack, unsigned int n_line);



#endif /* Functions */
