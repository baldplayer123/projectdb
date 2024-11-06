#ifndef DB_H
#define DB_H

#define MAX_CONTENT_NAME 50
#define MAX_TABLES 256

extern char *databasepath;

// This struct will represent what data will be inside the row, so here it will be the name, director, and a rate of the movie 1-10
// For now i will store the rating as a int but depending on the way i use this value, it could be changed to a char
// maybe add a date value, date when you watched the movie
typedef struct{
	char name[MAX_CONTENT_NAME];
	char director[MAX_CONTENT_NAME];
	int rating;

} Movies_w ;

// this struct will be the table that stores all my rows, And there will be a maximum of 256 rows in the table that could be stored
typedef struct{
	Movies_w rows[MAX_TABLES];
	int rows_c;
} Table ;




void createdb();
void deletedb(); 
void listdb();
void insert_db();
void use();
#endif
