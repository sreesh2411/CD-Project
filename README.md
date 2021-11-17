# CD-Project
This repository contains the files and folders of the project of course Compiler Design (UE18CS351).<br><br>

## Problem Statement
Our objective of this project is to design a <b><ins>Mini compiler for the C programming language</ins></b>, focusing on generating an optimized target language code, from the high-level source code for specific constructs. The main tools used in the projects LEX which initially identifies the predefined patterns and generates tokens (lexemes) after matching with the patterns and YACC which parses the input for semantic meaning and generates a symbol table and intermediate code from the source code. We use python for optimizing the intermediate code generated. The optimizations done are Common Subexpression Elimination, Constant Folding and Constant Propagation, and Dead Code Elimination.
The steps used to achieve this are:
•	Generating symbol table. 
•	Generating intermediate code in quadruple format.
•	Performing code optimizations.


## Directory Structure

```bash
├── PHASE-1
    ├── Phase-LexAnalysis
    └── Phase-SyntaxAnalysis

└── PHASE-2
    ├── Phase-CodeOptimize
        ├── ComSubExp (Common Subexpression Elimiation)
        ├── ConstFoldPro (Constant Folding and Propogation)
        ├── DeadCode (Dead Code Elimination)
        ├── final 
        ├── practice files 
    └── Phase-ICG
```
    
## Team Members:
- Harsha Adimulam
- Varun Kadam
- Ishan Rai
- K. Sreesh Reddy

