# 0x19. C - Stacks, Queues - LIFO, FIFO - ALX project about data structures in C
Learning Objectives
        At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
        What do LIFO and FIFO mean
        What is a stack, and when to use it
        What is a queue, and when to use it
        What are the common implementations of stacks and queues
        What are the most common use cases of stacks and queues
        What is the proper way to use global variables

# 0. push, pall
Implement the push and pall opcodes.

The push opcode
        The opcode push pushes an element to the stack.
                Usage: push <int>
                        where <int> is an integer
                if <int> is not an integer or if there is no argument given to push, print the error message L<line_number>: usage: push integer, followed by a new line, and exit with the status EXIT_FAILURE
                        where is the line number in the file
                You won’t have to deal with overflows. Use the atoi function

The pall opcode
        The opcode pall prints all the values on the stack, starting from the top of the stack.

                Usage pall
                Format: see example
                If the stack is empty, don’t print anything
--------------------------------------------------------------------------------
julien@ubuntu:~/monty$ cat -e bytecodes/00.m
push 1$
push 2$
push 3$
pall$
julien@ubuntu:~/monty$ ./monty bytecodes/00.m
3
2
1
julien@ubuntu:~/monty$
--------------------------------------------------------------------------------