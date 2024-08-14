# Push_swap

## Project Overview
"Push_swap" is a project focused on sorting algorithms, specifically designed to sort data on a stack with a limited set of operations in as few moves as possible. This project not only tests your ability to work with data structures and algorithms but also pushes for optimization and efficiency in code.

## Features
- Efficient sorting of data on a stack.
- Implementation using a set of prescribed operations to manipulate two stacks.
- Minimization of the operation count to achieve sorting.

## Compilation and Execution
Compile the project using the provided Makefile:
```bash
make all
```
Run the program with:
```bash
./push_swap [list of numbers]
```
Run the checker (to verify the sort):
```bash
ARG="numbers to sort"; ./push_swap $ARG | ./checker $ARG

```
## Game Controls
- `sa` : Swap the first two elements of stack a (nothing if one or no elements).
- `sb` : Swap the first two elements of stack b (nothing if one or no elements).
- `ss` : `sa` and `sb` simultaneously.
- `pa` : Push the top element from stack b to stack a.
- `pb` : Push the top element from stack a to stack b.
- `ra` : Rotate all elements of stack a upwards.
- `rb` : Rotate all elements of stack b upwards.
- `rr` : `ra` and `rb` simultaneously.
- `rra` : Reverse rotate all elements of stack a downwards.
- `rrb` : Reverse rotate all elements of stack b downwards.
- `rrr` : `rra` and `rrb` simultaneously.

## Files and Directories
- `src/` - Source files including algorithms and stack manipulations.
- `include/` - Header files.
- `Makefile` - Commands to compile the project.

## Dependencies
- GCC compiler
- Make
