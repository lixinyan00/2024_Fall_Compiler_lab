#! /bin/bash
cd ~/Compiler_Lab/lab1
cp lexical_analysis.l Submit/Code/lexical_analysis.l
cp syntax.y Submit/Code/syntax.y
cp main.c Submit/Code/main.c
cp parse_tree.h Submit/Code/parse_tree.h
flex lexical_analysis.l
bison -d syntax.y
gcc main.c syntax.tab.c -lfl -ly -o parser
cp parser Submit/parser
cd Submit
rm 211220043.zip
zip -r 211220043.zip ./*
