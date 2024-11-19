#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "db.h"


// make a function to verify is the selected db exist
// make a function to list all db and update during program exec


int main(int argc, char* argv[], char* envp[]){
	printf("Welcome to this database !\n Check the README before using ! \n");
	int choice;
	while (1) {
		printf("\nMenu:\n");
		printf("1. Create a new database\n");
		printf("2. Load a database from a file\n");
		printf("3. Save the database to a file\n");
		printf("4. Delete the current database\n");
		printf("5. Display the database\n");
		printf("6. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
	}
	



}

