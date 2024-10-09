%locations
%{
    #include "lex.yy.c"
    struct TreeNode* GetRoot();
    struct TreeNode* root;
%}

%union {
    struct TreeNode* type_node;
}

%token <type_node> SEMI
%token <type_node> COMMA
%token <type_node> ASSIGNOP
%token <type_node> RELOP
%token <type_node> PLUS
%token <type_node> MINUS
%token <type_node> STAR
%token <type_node> DIV
%token <type_node> AND
%token <type_node> OR
%token <type_node> DOT
%token <type_node> NOT
%token <type_node> TYPE
%token <type_node> LP
%token <type_node> RP
%token <type_node> LB
%token <type_node> RB
%token <type_node> LC
%token <type_node> RC
%token <type_node> STRUCT
%token <type_node> RETURN
%token <type_node> IF
%token <type_node> ELSE
%token <type_node> WHILE ID INT FLOAT
%type <type_node> Program ExtDefList ExtDef ExtDecList Specifier StructSpecifier OptTag
%type <type_node> Tag VarDec FunDec VarList ParamDec CompSt StmtList Stmt DefList Def DecList Dec
%type <type_node> Exp Args error



%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE
%right ASSIGNOP
%left OR
%left AND
%left RELOP
%left PLUS MINUS
%left STAR DIV
%right NOT
%left DOT LP RP LB RB

%%
Program : ExtDefList {
        $$ = NewLexNode(@$.first_line, "Program", "Program", GRAM_UNIT);
        AddChild($$, $1);
        root = $$;
    }
    ;
ExtDefList : {
        $$ = NewLexNode(@$.first_line, "ExtDefList", "ExtDefList", EMPTY);
    }
    | ExtDef ExtDefList{
        $$ = NewLexNode(@$.first_line, "ExtDefList", "ExtDefList", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
    }
    ;
ExtDef : Specifier ExtDecList SEMI{
        $$ = NewLexNode(@$.first_line, "ExtDef", "ExtDef", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    | Specifier SEMI{
        $$ = NewLexNode(@$.first_line, "ExtDef", "ExtDef", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
    }
    | Specifier FunDec CompSt{
        $$ = NewLexNode(@$.first_line, "ExtDef", "ExtDef", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    | Specifier ExtDecList error SEMI{
        grammar_error = 1; yyerrok;
    }
    | Specifier error CompSt{
        grammar_error = 1; yyerrok;
    }
    ;
ExtDecList : VarDec{
        $$ = NewLexNode(@$.first_line, "ExtDecList", "ExtDecList", GRAM_UNIT);
        AddChild($$, $1);
    }
    | VarDec COMMA ExtDecList{
        $$ = NewLexNode(@$.first_line, "ExtDecList", "ExtDecList", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    ;
Specifier : TYPE{
        $$ = NewLexNode(@$.first_line, "Specifier", "Specifier", GRAM_UNIT);
        AddChild($$, $1);
    }
    | StructSpecifier{
        $$ = NewLexNode(@$.first_line, "Specifier", "Specifier", GRAM_UNIT);
        AddChild($$, $1);
    }
    ;
StructSpecifier : STRUCT OptTag LC DefList RC{
        $$ = NewLexNode(@$.first_line, "StructSpecifier", "StructSpecifier", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
        AddSiblings($3, $4);
        AddSiblings($4, $5);
    }
    | STRUCT Tag{
        $$ = NewLexNode(@$.first_line, "StructSpecifier", "StructSpecifier", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
    }
    ;
OptTag : {
        $$ = NewLexNode(@$.first_line, "OptTag", "OptTag", EMPTY);
    }
    | ID{
        $$ = NewLexNode(@$.first_line, "OptTag", "OptTag", GRAM_UNIT);
        AddChild($$, $1);
    }
    ;
Tag : ID{
        $$ = NewLexNode(@$.first_line, "Tag", "Tag", GRAM_UNIT);
        AddChild($$, $1);
    }
    ;
VarDec : ID{
        $$ = NewLexNode(@$.first_line, "VarDec", "VarDec", GRAM_UNIT);
        AddChild($$, $1);
    }
    | VarDec LB INT RB {
        $$ = NewLexNode(@$.first_line, "VarDec", "VarDec", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
        AddSiblings($3, $4);
    }
    | VarDec LB error RB {
        grammar_error = 1;  yyerrok;
    }
    ;
FunDec : ID LP VarList RP{
        $$ = NewLexNode(@$.first_line, "FunDec", "FunDec", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
        AddSiblings($3, $4);
    }
    | ID LP RP{
        $$ = NewLexNode(@$.first_line, "FunDec", "FunDec", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    | error RP{
        grammar_error = 1; yyerrok;
    }
    | ID LP error RP{
        grammar_error = 1; yyerrok;
    }
    ;
VarList : ParamDec COMMA VarList{
        $$ = NewLexNode(@$.first_line, "VarList", "VarList", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    | ParamDec{
        $$ = NewLexNode(@$.first_line, "VarList", "VarList", GRAM_UNIT);
        AddChild($$, $1);
    }
    ;
ParamDec : Specifier VarDec{
        $$ = NewLexNode(@$.first_line, "ParamDec", "ParamDec", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
    }
    ;
CompSt : LC DefList StmtList RC{
        $$ = NewLexNode(@$.first_line, "CompSt", "CompSt", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
        AddSiblings($3, $4);
    }
    | error RC{
        grammar_error = 1; yyerrok;
    }
    ;
StmtList : Stmt StmtList{
        $$ = NewLexNode(@$.first_line, "StmtList", "StmtList", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
    }
    |{
        $$ = NewLexNode(@$.first_line, "StmtList", "StmtList", EMPTY);
    }
    ;
Stmt : Exp SEMI{
        $$ = NewLexNode(@$.first_line, "Stmt", "Stmt", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
    }
    | CompSt{
        $$ = NewLexNode(@$.first_line, "Stmt", "Stmt", GRAM_UNIT);
        AddChild($$, $1);
    }
    | RETURN Exp SEMI{
        $$ = NewLexNode(@$.first_line, "Stmt", "Stmt", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    | IF LP Exp RP Stmt %prec LOWER_THAN_ELSE{
        $$ = NewLexNode(@$.first_line, "Stmt", "Stmt", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
        AddSiblings($3, $4);
        AddSiblings($4, $5);
    }
    | IF LP Exp RP Stmt ELSE Stmt{
        $$ = NewLexNode(@$.first_line, "Stmt", "Stmt", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
        AddSiblings($3, $4);
        AddSiblings($4, $5);
        AddSiblings($5, $6);
        AddSiblings($6, $7);
    }
    | WHILE LP Exp RP Stmt{
        $$ = NewLexNode(@$.first_line, "Stmt", "Stmt", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
        AddSiblings($3, $4);
        AddSiblings($4, $5);
    }
    | error SEMI{
        grammar_error = 1; yyerrok;
    }
    | WHILE LP Exp error {
        grammar_error = 1; yyerrok;
    }
    | Exp error {
        grammar_error = 1; yyerrok;
    }
    | RETURN Exp error {
        grammar_error = 1; yyerrok;
    }
    ;
DefList : {
    $$ = NewLexNode(@$.first_line, "DefList", "DefList", EMPTY);
    }
    | Def DefList{
        $$ = NewLexNode(@$.first_line, "DefList", "DefList", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
    }
    ;
Def : Specifier DecList SEMI{
        $$ = NewLexNode(@$.first_line, "Def", "Def", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    | Specifier error SEMI{
        grammar_error = 1; yyerrok;
    }
    ;
DecList : Dec{
        $$ = NewLexNode(@$.first_line, "DecList", "DecList", GRAM_UNIT);
        AddChild($$, $1);
    }
    | Dec COMMA DecList{
        $$ = NewLexNode(@$.first_line, "DecList", "DecList", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    ;
Dec : VarDec{
        $$ = NewLexNode(@$.first_line, "Dec", "Dec", GRAM_UNIT);
        AddChild($$, $1);
    }
    | VarDec ASSIGNOP Exp{
        $$ = NewLexNode(@$.first_line, "Dec", "Dec", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    ;
Exp : Exp ASSIGNOP Exp{
        $$ = NewLexNode(@$.first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    | Exp AND Exp{
        $$ = NewLexNode(@$.first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    | Exp OR Exp{
        $$ = NewLexNode(@$.first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    | Exp RELOP Exp{
        $$ = NewLexNode(@$.first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    | Exp PLUS Exp{
        $$ = NewLexNode(@$.first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    | Exp MINUS Exp{
        $$ = NewLexNode(@$.first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    | Exp STAR Exp{
        $$ = NewLexNode(@$.first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    | Exp DIV Exp{
        $$ = NewLexNode(@$.first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    | LP Exp RP{
        $$ = NewLexNode(@$.first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    | MINUS Exp{
        $$ = NewLexNode(@$.first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
    }
    | NOT Exp{
        $$ = NewLexNode(@$.first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
    }
    | ID LP Args RP{
        $$ = NewLexNode(@$.first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
        AddSiblings($3, $4);
    }
    | ID LP RP{
        $$ = NewLexNode(@$.first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    | Exp LB Exp RB{
        $$ = NewLexNode(@$.first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
        AddSiblings($3, $4);
    }
    | Exp DOT ID{
        $$ = NewLexNode(@$.first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    | ID{
        $$ = NewLexNode(@$.first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild($$, $1);
    }
    | INT{
        $$ = NewLexNode(@$.first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild($$, $1);
    }
    | FLOAT{
        $$ = NewLexNode(@$.first_line, "Exp", "Exp", GRAM_UNIT);
        AddChild($$, $1);
    }
    | Exp RELOP error{
        grammar_error = 1; yyerrok;
    }
    | Exp ASSIGNOP error{
        grammar_error = 1; yyerrok;
    }
    | Exp AND error{
        grammar_error = 1; yyerrok;
    }
    | Exp OR error{
        grammar_error = 1; yyerrok;
    }
    | Exp PLUS error{
        grammar_error = 1; yyerrok;
    }
    | Exp MINUS error{
        grammar_error = 1; yyerrok;
    }
    | Exp STAR error{
        grammar_error = 1; yyerrok;
    }
    | Exp DIV error{
        grammar_error = 1; yyerrok;
    }
    | Exp DOT error{
        grammar_error = 1; yyerrok;
    }
    ;
Args : Exp COMMA Args{
        $$ = NewLexNode(@$.first_line, "Args", "Args", GRAM_UNIT);
        AddChild($$, $1);
        AddSiblings($1, $2);
        AddSiblings($2, $3);
    }
    | Exp{
        $$ = NewLexNode(@$.first_line, "Args", "Args", GRAM_UNIT);
        AddChild($$, $1);
    }
    ;
%%
yyerror(char *msg) {
    grammar_error = 1;
    if(lexical_error != yylineno) {
        printf("Error type B at line %d: %s, near \'%s\'\n", yylineno, msg, yytext);
    }
}
struct TreeNode* GetRoot()
{
    return root;
}