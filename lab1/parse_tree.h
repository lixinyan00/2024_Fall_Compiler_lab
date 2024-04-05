#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef TREENODE_H
#define TREENODE_H

#define LEX_UNIT_INT 0
#define LEX_UNIT_FLOAT 1
#define LEX_UNIT_TYPE 2
#define LEX_UNIT_ID 3
#define LEX_UNIT_OTHER 4
#define GRAM_UNIT 5
#define EMPTY 6

int lexical_error = 0;
int grammar_error = 0;

struct TreeNode {
  struct TreeNode *NextSibling;
  struct TreeNode *FirstChild;
  int line_no; // the line number of the node
  char *name;  // the name of the node
  char *value;
  int type;
};
struct TreeNode *NewLexNode(int line_no, char *name, char *value, int type) {
  struct TreeNode *result = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  result->NextSibling = NULL;
  result->FirstChild = NULL;
  result->line_no = line_no;
  result->type = type;
  result->name = strdup(name);
  result->value = strdup(value);
  return result;
}
void AddChild(struct TreeNode *Parent, struct TreeNode *Child) {

  Parent->FirstChild = Child;
}
void AddSiblings(struct TreeNode *First, struct TreeNode *Next) {

  First->NextSibling = Next;
}
void Print(struct TreeNode *root, int height) {
  if (root == NULL) {
    return;
  } else if (root->type == EMPTY) {
    Print(root->FirstChild, height + 1);
    Print(root->NextSibling, height);
    return;
  }
  for (int i = 0; i < height; i++) {
    printf("  ");
  }
  if (root->type == GRAM_UNIT) {
    printf("%s (%d)\n", root->name, root->line_no);
  } else if (root->type == LEX_UNIT_OTHER) {
    printf("%s\n", root->name);
  } else if (root->type == LEX_UNIT_ID) {
    printf("%s: %s\n", root->name, root->value);
  } else if (root->type == LEX_UNIT_TYPE) {
    printf("%s: %s\n", root->name, root->value);
  } else if (root->type == LEX_UNIT_INT) {
    printf("%s: %d\n", root->name, atoi(root->value));
  } else if (root->type == LEX_UNIT_FLOAT) {
    float temp_float = atof(root->value);
    printf("%s: %f\n", root->name, temp_float);
  }
  Print(root->FirstChild, height + 1);
  Print(root->NextSibling, height);
}
#endif