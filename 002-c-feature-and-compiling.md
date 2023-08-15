# Features of C Programming Language

C -> procedural programming.

**Main Features**

-   low-level access to memory
-   simple set of keywords
-   clean style

## Most Important about C

### 1. Procedural

[Procedural Language Source](https://www.geeksforgeeks.org/difference-between-procedural-and-non-procedural-language/)  
Procedure -> program code is written as sequence of instructiona.

User have to specify **What to do** and **How to do** (step by step procedure).
The instructions are executed in the sequential order. Because the code is written
in specific instructions, this will affected that the code only can solve specific
problem.

Example of procedural Language: `FORTRAN, COBOL, ALGOL, BASIC, C, and PASCAL`

**Non-procedural**  
In non-procedural language, user (programmer) only need to write the code for
**What to do**, NOT **How to do**. Non-procedural also know as an applicative or
**Functional Language**. " It involves the development of the functions from other
functions to construct more complex functions."

Example of non-procedural language: `SQL, PROLOG, LISP`

**Difference between procedural and non-procedural language**

| Procedural Language                                   | Non-Procedural Language      |
| ----------------------------------------------------- | ---------------------------- |
| Command-Driven Language                               | Function-Driven Language     |
| return only restricted data types, and allowed values | return any datatype or value |
| High Efficiency                                       | low efficiency


### 2. Fast and Efficient

C programming is middle-level language provides programmer to access to direct 
manipulation with the computer hardware but higher-level language do not allow it.
Accessing closely to the hardware and compiled language makes the program run faster
than newer language like java, python that offer much more processing.

### 3. Modularity

C language has its own library to solve common problems. `Library` is C code that
store a C program that you can use anywhere. This flexiblity offer C more modular

### 4. Statically Type

Statically Type -> `type` of variable is checked at the time of compilation, not 
at run time.

### 5. General Purpose Language

You can use C for any task you have

### 6. Rich Built-in Operators

C offers rich set of built-in [Operators](https://www.geeksforgeeks.org/operators-in-c/)
that you can use to solve your problem

### 7. Rich Fetaure of Library

Robust Library and [Functions in C](https://www.geeksforgeeks.org/functions-in-c/)

### 8. Middle-level Language

[high-level Language](https://www.geeksforgeeks.org/difference-between-high-level-and-low-level-languages/)
Feature and capability for configuring software like assembly.

### 9. Portability

You can run C program in any environment or system. 

### 10. Easy to Extend

You can add functionality to a C program that you created. 

# Compiling in C

Compiling is a process to convert C source code into machine code that will be 
run by our computer. 

The process of compiling source code into machine code goes like this:

1. Source File: your code
2. Preprocessor: Preprocess File (output: .i File). This step also invoke your 
                 `#include` code (header file).  
                 The Source code will be pass this process  
                 - remove comment.  
                 - expansion of macros. Example add(a, b) -> (a + b)  
                 - expansion of included files. `header` file will be expanded  
                 - conditional compilation
                
3. Compiler: Compile your code into assembly code. Output: Assembly code (.s file)
4. Assembler: Object code (.o file). Resulting machine-level instructions
5. linker: executable file. 

Usually when you compile your code using `gcc`, you'll only get the executable
file, but if you want to get the intermediate file, you can run this command

```bash
gcc -Wall -save-temps filename.c –o filename 
```

# C Tokens 

`Tokens` is smallest individual element of C programming language. Token in C is
divided into 6 types based on the function. 

1. Keywords
2. identifiers
3. Constants
4. Strings
5. Special Symbols
6. Operators

## 1. Keywords

[more about keyword](https://www.geeksforgeeks.org/keywords-in-c/)

Keywords is a special world used by the programming to define some functionality.
The words are pre-define (defined by the creator of the programming language), you
can not redefine keywords. 

**Keyword Example**

```C
auto         double      int        struct
break        else        long       switch
case         enum        register   typedef
char         extern      return     union
const        float       short      unsigned
continue     for         signed     void
default      goto        sizeof     volatile
do           if          static     while
```

## 2. Identifiers

Identifier are general term for **naming variable, functions and arrays**. 
Identifier are user-define names. 

- arbitrarily long sequence of letter with digit or underscore
- can't use keyword as idenfitiers
- once declared, you can use idenfitier to refer to the associated value.

rules

1. must begin with letter or underscore (`_`)
2. consist only letter, digits, or underscore
3. not keyword
4. not contain white space



## Constant

Constant is fixed value and never change during the program run. You can declare 
a constant by using `const` keyword. 

```c
const int c_var = 20;
const int* const ptr = &c_var;
```

## String

[more about string](https://www.geeksforgeeks.org/strings-in-c/)
`String` are array of character (ended with null character (`'\0'`) -indicate end
of string-).  

"" : string  
'' : character

example of string

char string[10] = {'a', 'b', 'd', 'u', 'l', 'f', 'a', 't', 'a', 'h', '\0'};
char string[10] = "abdulfatah";
char string[] = "abdul fatah";

## Special Symbol

- Bracket `[]` : array element
- Parentheses `()` : function call and function parameter
- Braces `{}` : block of code, contain more than executable statement
- Comma `,` : separate more than one statement (separate parameters in function call)
- Colon `:` : operator for invokes something called an initialization list.
- semicolon `;` : statement terminator, indicates the end of one logical entity.
- Astrisk `*` : create a pointer variable and for the multiplication of variable
- assignment operator `=` : assign value and for logical operation validation
- Pre-processor `#` : used by the compiler to transform your program  before actual 
  compilation
- period `.` : used to access members of a structure or union
- tilde `~` : destructor to free some space from memory. 

## Operators

[More about operator](https://www.geeksforgeeks.org/operators-in-c/)
Unary operator, Binary Operator, Ternary Operator