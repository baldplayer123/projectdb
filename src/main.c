#include <stdio.h>
#include <string.h>
#include "repl.c"

int main(int argc, char* argv[], char* envp[]){
	printf("projectdb start \n");

	char input[6];

	while (1) {
		printf(" What do you want to do ?:\n  \033[32muse, create , delete or exit\n\033[0m");
		fgets(input, 6 , stdin);
		
		if (strcmp(input, "use\n") == 0 ) {
			break;
		}	
		if (strcmp(input, "create\n") == 0 ) {
			break;
		}
		if (strcmp(input, "delete\n") == 0 ) {
			break;
		}
		if (strcmp(input, "exit\n") == 0 ) {
			break;
		}
	
	}




  print_lol();
  return 0;
  
}

