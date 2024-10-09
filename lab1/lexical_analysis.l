%{
#include <stdio.h>
#include "syntax.tab.h"
#include "parse_tree.h"
int yycolumn = 1;

#define YY_USER_ACTION \
yylloc.first_line = yylloc.last_line = yylineno; \
yylloc.first_column = yycolumn; \
yylloc.last_column = yycolumn + yyleng - 1; \
yycolumn += yyleng;
%}

%x IN_COMMENT
digit [0-9]
nz_digit [1-9]
letter [_a-zA-Z]
character [_a-zA-Z0-9]
ID {letter}{1}{character}{0,31}
INT ({nz_digit}{digit}{0,31})|[0]
FLOAT (({nz_digit}{digit}*)|0)\.(({digit}*{nz_digit})|0)
SCIENCE_FLOAT (({digit}*\.{digit}+)|({digit}+\.{digit}*))[Ee][+-]?[0-9]+
ONE_LINE_COMMENT \/\/[^\n]*
COMMENT_L \/\* 

%%
"\r" {}
"\n" {
    yylineno++;
    yycolumn = 1;
    }
" " {}
"\t" {}
{ONE_LINE_COMMENT} {
    grammar_error = 1;
    printf("Error type B at line %d: syntax error, near \'%s\'\n", yylineno, yytext);
    }
{COMMENT_L} {
    grammar_error = 1;
    printf("Error type B at line %d: syntax error, near \'%s\'\n", yylineno, yytext);
    yylineno = comment_handle(yylineno);
    }  
";" {
    yylval.type_node = NewLexNode(yylineno, "SEMI", ";", LEX_UNIT_OTHER);
    return SEMI;
    }
"," {
    yylval.type_node = NewLexNode(yylineno, "COMMA", ",", LEX_UNIT_OTHER);
    return COMMA;
    }
"=" {
    yylval.type_node = NewLexNode(yylineno, "ASSIGNOP", "=", LEX_UNIT_OTHER);
    return ASSIGNOP;
    }
(>|<|>=|<=|==|!=) {
    yylval.type_node = NewLexNode(yylineno, "RELOP", yytext, LEX_UNIT_OTHER);
    return RELOP;
    }
"\+" {
    yylval.type_node = NewLexNode(yylineno, "PLUS", "+", LEX_UNIT_OTHER);
    return PLUS;
    }
"-" {
    yylval.type_node = NewLexNode(yylineno, "MINUS", "-", LEX_UNIT_OTHER);
    return MINUS;
    }
"\*" {
    yylval.type_node = NewLexNode(yylineno, "STAR", "*", LEX_UNIT_OTHER);
    return STAR;
    }
"\/" {
    yylval.type_node = NewLexNode(yylineno, "DIV", "/", LEX_UNIT_OTHER);
    return DIV;
    }
"&&" {
    yylval.type_node = NewLexNode(yylineno, "AND", "&&", LEX_UNIT_OTHER);
    return AND;
    }
"\|\|" {
    yylval.type_node = NewLexNode(yylineno, "OR", "||", LEX_UNIT_OTHER);
    return OR;
    }
"\." {
    yylval.type_node = NewLexNode(yylineno, "DOT", ".", LEX_UNIT_OTHER);
    return DOT;
    }
"!" {
    yylval.type_node = NewLexNode(yylineno, "NOT", "!", LEX_UNIT_OTHER);
    return NOT;
    }
("int"|"float") {
    yylval.type_node = NewLexNode(yylineno, "TYPE", yytext, LEX_UNIT_TYPE);
    return TYPE;
    }
"(" {
    yylval.type_node = NewLexNode(yylineno, "LP", "(", LEX_UNIT_OTHER);
    return LP;
    }
")" {
    yylval.type_node = NewLexNode(yylineno, "RP", ")", LEX_UNIT_OTHER);
    return RP;
    }
"\[" {
    yylval.type_node = NewLexNode(yylineno, "LB", "[", LEX_UNIT_OTHER);
    return LB;
    }
"\]" {
    yylval.type_node = NewLexNode(yylineno, "RB", "]", LEX_UNIT_OTHER);
    return RB;
    }
"\{" {
    yylval.type_node = NewLexNode(yylineno, "LC", "{", LEX_UNIT_OTHER);
    return LC;
    }
"\}" {
    yylval.type_node = NewLexNode(yylineno, "RC", "}", LEX_UNIT_OTHER);
    return RC;
    }
"struct" {
    yylval.type_node = NewLexNode(yylineno, "STRUCT", "struct", LEX_UNIT_OTHER);
    return STRUCT;
    }
"return" {
    yylval.type_node = NewLexNode(yylineno, "RETURN", "return", LEX_UNIT_OTHER);
    return RETURN;
    }
"if" {
    yylval.type_node = NewLexNode(yylineno, "IF", "if", LEX_UNIT_OTHER);
    return IF;
    }
"else" {
    yylval.type_node = NewLexNode(yylineno, "ELSE", "else", LEX_UNIT_OTHER);
    return ELSE;
    }
"while" {
    yylval.type_node = NewLexNode(yylineno, "WHILE", "while", LEX_UNIT_OTHER);
    return WHILE;
    }
{ID} {
    yylval.type_node = NewLexNode(yylineno, "ID", yytext, LEX_UNIT_ID);
    return ID;
    }
{INT} {
    yylval.type_node = NewLexNode(yylineno, "INT", yytext, LEX_UNIT_INT);
    return INT;
    }
{FLOAT} {
    yylval.type_node = NewLexNode(yylineno, "FLOAT", yytext, LEX_UNIT_FLOAT);
    return FLOAT;
    }
{SCIENCE_FLOAT} {
    yylval.type_node = NewLexNode(yylineno, "FLOAT", yytext, LEX_UNIT_FLOAT);
    return FLOAT;
    }
{digit}+{ID} {
    lexical_error = yylineno;
    printf("Error type A at line %d: invalid ID: \'%s\'\n", yylineno, yytext);
    return ID;
}
0{digit}+ {
    lexical_error = yylineno;
    printf("Error type A at line %d: invalid INT number: \'%s\'\n", yylineno, yytext);
    return INT;
}
0{digit}+\.{digit}+ {
    lexical_error = yylineno;
    printf("Error type A at line %d: invalid FLOAT number: \'%s\'\n", yylineno, yytext);
    return FLOAT;
}
(({digit}+\.)|(\.{digit}+)) {
    lexical_error = yylineno;
    printf("Error type A at line %d: invalid FLOAT number: \'%s\'\n", yylineno, yytext);
    return FLOAT;
}
{digit}*[Ee]{digit}* {
    lexical_error = yylineno;
    printf("Error type A at line %d: invalid FLOAT number: \'%s\'\n", yylineno, yytext);
    return FLOAT;
}
(({digit}*\.{digit}+)|({digit}+\.{digit}*))[Ee][+-]? {
    lexical_error = yylineno;
    printf("Error type A at line %d: invalid FLOAT number: \'%s\'\n", yylineno, yytext);
    return FLOAT;
}
{FLOAT}\.[0-9\.]* {
    lexical_error = yylineno;
    printf("Error type A at line %d: invalid FLOAT number: \'%s\'\n", yylineno, yytext);
    return FLOAT;
}
(({nz_digit}{digit}*)|0)\.(\.+)(({digit}*{nz_digit})|0) {
    lexical_error = yylineno;
    printf("Error type A at line %d: invalid FLOAT number: \'%s\'\n", yylineno, yytext);
    return FLOAT;
}
{SCIENCE_FLOAT}\.([\.0-9])* {
    lexical_error = yylineno;
    printf("Error type A at line %d: invalid FLOAT number: \'%s\'\n", yylineno, yytext);
    return FLOAT;
}
(({digit}*\.{digit}+)|({digit}+\.{digit}*))[Ee]\.[+-]?[0-9]* {
    lexical_error = yylineno;
    printf("Error type A at line %d: invalid FLOAT number: \'%s\'\n", yylineno, yytext);
    return FLOAT;
}
\.[Ee][+-][0-9]+ {
    lexical_error = yylineno;
    printf("Error type A at line %d: invalid FLOAT number: \'%s\'\n", yylineno, yytext);
    return FLOAT;
}
\.[Ee]\.[+-][0-9]* {
    lexical_error = yylineno;
    printf("Error type A at line %d: invalid FLOAT number: \'%s\'\n", yylineno, yytext);
    return FLOAT;
}
. {
    lexical_error = yylineno;
    printf("Error type A at line %d: Mysterious characters: \'%s\'\n", yylineno , yytext);
    return MINUS;
}
%%

int comment_handle(int yylineno) {
    int state = 0;
    while(state != 2) {
        char c = input();
        if (c == 0) {
            return -1;
        }
        else if (c == '*') {
            state = 1;
        }
        else if (c == '/' && state == 1) {
            state = 2;
        }
        else {
            state = 0;
            if (c == '\n') {
                yylineno++;
                printf("Error type B at line %d: syntax error\n", yylineno);
            }
        }
    }
    return yylineno;
}
