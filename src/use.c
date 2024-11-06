#include <stdio.h>
#include "db.h"

void use(){
	// Setup the Table for the movie i watched and initialise at 0
	Table mymovies = {0};
	
	insert_db(&mymovies, "fightclub", "david fincher", 8);                
	
	printf("Row: %d, name: %s, director %s, rating:%d\n",
		mymovies.rows_c,
		mymovies.rows[0].name,
		mymovies.rows[0].director,
		mymovies.rows[0].rating


	);



};
