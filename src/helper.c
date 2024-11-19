#include <stdio.h>
#include <stdlib.h>
#include "db.h"

Nodes* bt_insert(Nodes* root, Row rows){
	if (root == NULL) {
		return bt_CreateNode(rows);
	}

	if (rows.id % 2 == 0) {
		root->left = bt_insert(root->left,rows);
	}else {
		root->right = bt_insert(root->right, rows);
	}
	return root;
};

void bt_traverse(Nodes* root) {
    if (root == NULL){
	return;
	}; 

    bt_traverse(root->left);
    printf("ID: %d, Name: %s, Content: %s\n", root->rows.id, root->rows.name, root->rows.content);
    bt_traverse(root->right);
}

Nodes* noChildren(Nodes *root){
	free(root);
	return NULL;
};

Nodes* oneChildren(Nodes *root){
	Nodes* child;
	if (root->left != NULL) {
		child = root->left;	
	} else {
		child = root->right;
	}
	free(root);
	return child;
};

Nodes* twoChildren(Nodes *root){
	Nodes* succesor =  minValue(root->right);
	root->rows = succesor->rows;
	root->right = deleteNode(root->right, succesor->rows.id);
	return root;
};

Nodes* minValue(Nodes *root){
	while (root !=  NULL && root->left != NULL) {
		root = root->left;
	}
	return root;

};

void freeTree(Nodes* root){
	if (root == NULL) {
		return;
	}
	freeTree(root->left);
	freeTree(root->right);
	free(root);

};


