CC = gcc
CFLAGS = -Wall -pedantic

bindir:
	mkdir -p bin

main: bindir
	$(CC) $(CFLAGS) main.c -o bin/main

data_types: bindir
	$(CC) $(CFLAGS) data_types.c -o bin/data_types

variables: bindir
	$(CC) $(CFLAGS) variables.c -o bin/variables

output_functions: bindir
	$(CC) $(CFLAGS) output_functions.c -o bin/output_functions

input_functions: bindir
	$(CC) $(CFLAGS) input_functions.c -o bin/input_functions

boolean_expressions: bindir
	$(CC) $(CFLAGS) boolean_expressions.c -o bin/boolean_expressions

relational_expressions: bindir
	$(CC) $(CFLAGS) relational_expressions.c -o bin/relational_expressions

arrays: bindir
	$(CC) $(CFLAGS) arrays.c -o bin/arrays

structs: bindir
	$(CC) $(CFLAGS) structs.c -o bin/structs

increment_decrement: bindir
	$(CC) $(CFLAGS) increment_decrement.c -o bin/increment_decrement

control_structures: bindir
	$(CC) $(CFLAGS) control_structures.c -o bin/control_structures

pointers: bindir
	$(CC) $(CFLAGS) pointers.c -o bin/pointers

scopes: bindir
	$(CC) $(CFLAGS) scopes.c -o bin/scopes

parameters: bindir
	$(CC) $(CFLAGS) parameters.c -o bin/parameters

memory_leak: bindir
	$(CC) $(CFLAGS) memory_leak.c -o bin/memory_leak

malloc_array: bindir
	$(CC) $(CFLAGS) malloc_array.c -o bin/malloc_array

function_return_array: bindir
	$(CC) $(CFLAGS) function_return_array.c -o bin/function_return_array

function_malloc_array: bindir
	$(CC) $(CFLAGS) function_malloc_array.c -o bin/function_malloc_array

clean:
	rm -rf bin