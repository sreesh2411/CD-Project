#!/bin/bash

#File to run the necessary commands (generates a.out executable file)


lex lexer.l

yacc -d -v parser.y

gcc y.tab.c -ll
