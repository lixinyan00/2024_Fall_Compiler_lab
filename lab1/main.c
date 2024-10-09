#include <stdio.h>
extern int lexical_error;
extern int grammar_error;
extern int yydebug;
extern int yyparse();
extern void yyrestart(FILE *);
extern void Print(struct TreeNode *, int);
extern struct TreeNode *GetRoot();
yydebug = 1;
int main(int argc, char **argv) {
  if (argc <= 1)
    return 1;
  FILE *f = fopen(argv[1], "r");
  if (!f) {
    perror(argv[1]);
    return 1;
  }
  yyrestart(f);
  yyparse();
  if (lexical_error == 0 && grammar_error == 0) {
    Print(GetRoot(), 0);
  }
  return 0;
}
