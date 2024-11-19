# Projet database in C
    L'objectif du projet est de faire une base de donnée en C utilisant un binary tree pour le stockage des données.

## Compiler flag and version:
    Compiler flag: -Wall -Wextra
    Compiler: gcc 14.2.1 x84_64
## Makefile and How to build:
    use command make to build the program.

## Binary tree:
    This program use a basic binary tree that will check if the id is even or odd.
    if the id % 2 == 0, row will go on the left else it will go on the right.
    

## Structures:
    Rows:
        - id (int): identifier in the database for each row.
        - name (char[20]): name of the data stored.
        - content (char[256]): any data you wish to store.
    Nodes:
        - Row rows = store the row inside
        - Nodes *left = Store what is on the left
        - Nodes*right = Store what is on the right
## Fonctions:
    
