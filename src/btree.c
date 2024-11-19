#include "db.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Nodes* bt_CreateNode(Row rows){
	Nodes* newNode = malloc(sizeof(Nodes));
	newNode->rows = rows;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
};

void displayTable(Table* table) {
    printf("Database Contents (In-Order Traversal):\n");
    bt_traverse(table->root);
}

Nodes* AddRow(Nodes *root, int id, char* name, char* content){
	Row new = {id, "", ""};
	strncpy(new.name, name, MAX_NAME - 1);
	strncpy(new.content, content, MAX_CONTENT - 1);
	return bt_insert(root, new);
};


Row* bt_search(Nodes* root, int id){
	if (root == NULL) {
		return NULL;
	}
	if (root->rows.id == id) {
		printf("Rows wih id %d was found!\n",id);
		return &(root->rows);
	
	}
	if (id % 2 == 0) {
		return bt_search(root->left, id);
	}else {
		return bt_search(root->right, id);
	}

};

Nodes* deleteNode(Nodes* root, int id){
	if (root == NULL) {
		return NULL;
	}
	if (id % 2 == 0 && id != root->rows.id) {
		root->left = deleteNode(root->left, id);
	} else if (id % 2 != 0 && id != root->rows.id) {
		root->right = deleteNode(root->right, id);
	} else if (root->rows.id == id) {
		if (root->left == NULL && root->right == NULL) {
			return noChildren(root);
		}else if (root->left == NULL || root->right == NULL) {
			return oneChildren(root);
		}else {
			return twoChildren(root);
		}
	
	}
	return NULL;
};



