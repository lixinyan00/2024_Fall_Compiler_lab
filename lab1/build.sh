#! /bin/bash
flex lexical_analysis.l
bison -d syntax.y
gcc main.c syntax.tab.c -lfl -ly -o parser
cd test1/
python3 test.py -p ../parser -g 2
cd ..
