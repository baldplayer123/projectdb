#ifndef DB_H
#define DB_H

#define MAX_ROW 256
#define MAX_POST_LENGTH 256

typedef struct{
	int id_post;
	char post[MAX_POST_LENGTH];



} Table ;

typedef struct{ 
	int RowCount;
	Table rows[MAX_ROW];
} Rows ;

void createdb(Rows *db);

#endif
