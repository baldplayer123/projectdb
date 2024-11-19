#ifndef DB_H
#define DB_H

// For rows
#include <stdio.h>
#define MAX_CONTENT 256
#define MAX_NAME 20
#define MAX_ROWS 256
// For database
#define MAX_DB_NAME 20

typedef struct Row {
	int id;
	char name[MAX_CONTENT];
	char content[MAX_CONTENT];

} Row ;

typedef struct Nodes {
	Row rows;
	struct Nodes *left;
	struct Nodes *right;
} Nodes;


// This will be the database and pointer to the root node

typedef struct Table {
	Nodes* root;
} Table ;

typedef struct Database {
	char name[20];
	Nodes *root;

} Database ;


// Create node
Nodes* bt_CreateNode(Row rows);

// Insert
Nodes* bt_insert(Nodes* root, Row rows);
Nodes* AddRow(Nodes *root, int id, char* name, char* content);

//Display
void displayTable(Table* table);
void bt_traverse(Nodes* root); 

// Search
Row* bt_search(Nodes* root, int id);

// Delete
Nodes* deleteNode(Nodes* root, int id);
Nodes* minValue(Nodes *root);
Nodes* noChildren(Nodes *root);
Nodes* oneChildren(Nodes *root);
Nodes* twoChildren(Nodes *root);

// Free
void freeTree(Nodes* root);

// Database
void saveTree(Nodes* node, FILE* file);

#endif
