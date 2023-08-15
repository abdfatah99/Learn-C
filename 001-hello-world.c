// this is comment
/**
 * This is multiline comment
 * 
 * about comment
 * 1. get more description of the code, mainly focus on 
 *    a. input, process (explanation about the algorithm), output
 * 
*/

# include <stdio.h> // header
// header: contains C function declarations and macro definitions to be shared 
// between several source file. 
// # -> program invoke by the compiler.

// main funciton -> entry point of program execution
// empty bracket -> no need any parameter. 
// int -> main program should integer, not recomend for you to use void() because
//        the program might be resulting unwanted behaviour.
// 
int main() { // main function, entry point of program execution
    int a = 10;
    printf("Hello World \n");
    printf("%d", a); // statement: instructions given into the compiler.
    
    // return value of main function indicated the status (succcess or not) of 
    // program
    return 0; // return 0, mean program not return anything (progrmam run well)
}

