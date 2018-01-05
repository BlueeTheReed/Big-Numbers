
all:main

main:main.c
	gcc -Wall -o main main.c -lgmp

test: all main
	./main
