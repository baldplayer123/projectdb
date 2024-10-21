## Compitaleur 
CC= gcc

## Options de compilation
CO= -Wall -Wextra

## Source
SRC = src/main.c src/createdb.c

projectdb: 
	$(CC) $(CO) $(SRC) -o projectdb



clean:
	rm projectdb
