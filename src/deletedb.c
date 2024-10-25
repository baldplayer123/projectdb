#include <stddef.h>
#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <string.h>

#include "db.h"

// add way to verify if the data choosen exist

void deletedb() {
	listdb();

	// This allow me to get the database name i want to delete
	char temp[100];
	printf("Which db do you want to delete ?\n");
	if (fgets(temp, sizeof(temp), stdin) != NULL) {
		temp[strcspn(temp,"\n")] = 0;
	} else {
		printf("error in the input");
	}
		
	// This allow me create the path to the right file to delete
	size_t lenpath = sizeof(temp) + sizeof(databasepath) + 1;
	char *target_path = malloc(lenpath);
	strcpy(target_path, databasepath);
	strcat(target_path, temp);
	printf("File %s will be deleted -- \n", target_path);


	// This allow me to delete the file
	if (remove(target_path) == 0) {
		printf("Database %s has been deleted\n", temp);
	
	} else {
		perror("Error !!!");
		printf("Database %s does not exist or there is an error in the deletion\n", temp);
	}

	free(target_path);
};
