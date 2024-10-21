#include <stdio.h>
#include <string.h>
#include "db.h"



//define user input
char input[6];


void createdb(Rows *db) {
	db->RowCount= 2;

	db->rows[0].id_post= 0;
	strcpy(db->rows[0].post, "A");

	db->rows[1].id_post= 1;
	strcpy(db->rows[1].post, "B");
	
	printf("ID POST\n");
	for (int i = 0; i < db->RowCount ; i++) {
		printf("%d %s\n", db->rows[i].id_post, db->rows[i].post);	
	};


};
