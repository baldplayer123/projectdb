#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "db.h"


// make a function to verify is the selected db exist
// make a function to list all db and update during program exec


int main(int argc, char* argv[], char* envp[]){
	printf("Welcome to this Movie database! \n You will be able to either store the movie you watched and rate them\n or Store the movie you want to watch!\n");


	// init the char inpur variable
	char input[256]; // Attention, trouvez solution car sinon l'utilisateur aura un nombre limitées d'entrer terminal

	// basic menu to let us user choose any action
	while (1) {
		printf(" What do you want to do ?:\n  \033[32muse, create , delete or exit\n\033[0m");
		fgets(input, sizeof(input) , stdin);

		size_t len = strlen(input);
		input[strcspn(input, "\n")] = '\0';

		if (strcmp(input, "use") == 0 ) {
			use();
		}	
		
		if (strcmp(input, "create") == 0 ) {
		}
		
		if (strcmp(input, "delete") == 0 ) {
		}
		
		if (strcmp(input, "exit") == 0 ) {
			break;
			}
	
	}
  return 0;



}

