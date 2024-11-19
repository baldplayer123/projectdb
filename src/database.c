#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "db.h"

 
Database* createDB(char* name){
	Database* db = malloc(sizeof(Database));
	strncpy(db->name, name, MAX_DB_NAME - 1);
	db->name[MAX_DB_NAME - 1] = '\0';
	db->root = NULL;
	printf("Database was created!\n");
	return db;
};

void saveDB(Database* db){
	if (db == NULL || db->root == NULL) {
		printf("Nothing to save \n");
	}
	FILE* file = fopen(db->name, "w");
	if (file == NULL) {
		printf("Failed to open file\n");
		return ;
	}
	saveTree(db->root, file);
	fclose(file);
	printf("Database %s has been saved!\n", db->name);
};

void saveTree(Nodes* node, FILE* file) {
	if (node == NULL) {
		return;
	};
	saveTree(node->left, file);
	fprintf(file, "%d,%s,%s\n", node->rows.id, node->rows.name, node->rows.content);
	saveTree(node->right, file);
}

void deleteDB(Database** db){
	

};




