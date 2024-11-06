## Compitaleur 
CC= gcc

## Options de compilation
CO= -Wall -Wextra

## Source
SRC = src/main.c src/use.c src/manage_db.c

SRC2 = btreeexample.c

projectdb: 
	$(CC) $(CO) $(SRC) -o projectdb



clean:
	rm projectdb example

example: 
	$(CC) $(CO) $(SRC2) -o example
