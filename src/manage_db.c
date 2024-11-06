#include <stdio.h>
#include <string.h>
#include "db.h"

void insert_db(Table *table, const char *name, const char *director, int rating){
	strncpy(table->rows[table->rows_c].name, name,MAX_CONTENT_NAME);
	strncpy(table->rows[table->rows_c].director, director, MAX_CONTENT_NAME);
	table->rows[table->rows_c].rating = rating;
	printf("Data has been added to table at rowcount = %d\n", table->rows_c );
	table->rows_c++;
};
