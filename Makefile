## Compitaleur 
CC= gcc

## Options de compilation
CO= -Wall -Wextra

## Source
SRC = src/main.c src/btree.c src/helper.c src/database.c

projectdb: 
	$(CC) $(CO) $(SRC) -o projectdb

clean:
	rm projectdb

