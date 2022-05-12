# Stacks, Queues - LIFO, FIFO

![GitHub last commit](https://img.shields.io/github/last-commit/mcarrascopiaggio/monty)
![GitHub code size in bytes](https://img.shields.io/github/languages/code-size/mcarrascopiaggio/monty)
![Lines of code](https://img.shields.io/tokei/lines/github/mcarrascopiaggio/monty)


## Project scope
- Implement the push and pall opcodes: The opcode push pushes an element to the stack and the opcode pall prints all the values on the stack, starting from the top of the stack.
- Implement the pint opcode: The opcode pint prints the value at the top of the stack, followed by a new line.
- Implement the pop opcode: The opcode pop removes the top element of the stack.
- Implement the swap opcode: The opcode swap swaps the top two elements of the stack.
- Implement the add opcode: The opcode add adds the top two elements of the stack.
- Implement the nop opcode: The opcode nop doesn’t do anything.
- Implement the sub opcode: The opcode sub subtracts the top element of the stack from the second.
- Implement the div opcode: The opcode div divides the second top element of the stack by the top element.
- Implement the mul opcode: The opcode mul multiplies the second top element of the stack with the top element.
- Implement the mod opcode: The opcode mod computes the rest of the division of the second top element by the top element. 
- Implement the pchar opcode: The opcode pchar prints the char at the top of the stack, followed by a new line.
- Implement the pstr opcode: prints the string starting at the top of the stack, followed by a new line.
- Implement the rotl opcode: The opcode rotl rotates the stack to the top.

## General Requirements
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=c90
- All  files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You allowed to use a maximum of one global variable
- No more than 5 functions per file
- You are allowed to use the C standard library
- The prototypes of all your functions should be included in your header file called monty.h
- All your header files should be include guarded

## Given structures

![image](https://github.com/mcarrascopiaggio/monty/blob/master/Image/Structures.png)

## Compilation
This project  was compiled this way:

```
$ gcc -g -Wall -Werror -Wextra -pedantic -std=c90 *.c -o monty
```
## Code Structure
![image](https://github.com/mcarrascopiaggio/monty/blob/master/Image/Struct.png)

## Algo

- Enter a file
- Check if the file is empty and if so send an error message and exit.
- Check if the number of arguments is equal to two. Print an error message and exit the system.
- Save the file
- Open the filed saved.
- Check if the file has content. If it has content, check if it is the correct type (.m), If it is not correct or it is empty, print an error message and exit.
- Get each of the lines inside the file.
- Tokenize the lines, saving the first token.
- Compare if the saved token matches any of the language commands. If it finds it, call the function that corresponds to it and record a change of number in a flag.
- In the event that the flag has not been modified, it means that there was no coincidence, so an error message must be printed and the result will be fine.
- Close de file
- Each time the flow finish free memory & close the file


#### Authors: 
@ [Marcela Carrasco](https://www.linkedin.com/in/marcela-carrasco-piaggio-0796b333/)





