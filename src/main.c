#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "repl.c"
#include "db.h"



int main(int argc, char* argv[], char* envp[]){
	printf("projectdb start \n");


	// init the char inpur variable
	char input[7];

	// basic menu to let us user choose any action
	while (1) {
		printf(" What do you want to do ?:\n  \033[32muse, create , delete or exit\n\033[0m");
		fgets(input, sizeof(input) , stdin);

		size_t len = strlen(input);
		if (len > 0 && input[len - 1] == '\n') {
			input[len - 1] = '\0';
		}
		printf("Input: '%s'\n", input); 

		if (strcmp(input, "use") == 0 ) {
			break;
		}	
		
		if (strcmp(input, "create") == 0 ) {
			Rows db;
			printf("test point atteint\n");
			createdb(&db);
			break;
		}
		
		if (strcmp(input, "delete") == 0 ) {
			break;
		}
		
		if (strcmp(input, "exit") == 0 ) {
			break;
			}
	
	}



  print_lol();
  return 0;



}

