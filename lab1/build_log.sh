#! /bin/bash
flex lexical_analysis.l
bison -d -t -v syntax.y
gcc main.c syntax.tab.c -lfl -ly -o parser

