/**
 * 1. what is the different between call by reference and call by value
 *    we'll get into this briefly later. 
 * 
 *    but, simply: 
 *    Original value -> Modified -> Yes -> call by reference
 *                                  No -> call by value 
*/

/**
 * Call by value
 * - actual parameter (declaration, called when you want to pass into a func)
 * - formal parameter (function argument, used in the function definition)
 * 
 * -> void change(int num){
 *        // num here is formal parameter
 * -> }
 * 
 * -> int main(){
 * ->   int x; 
 *      // passing value in function -> actual parameter
 * ->   change(x)
 * -> }
 * 
 * - the actual parameter is copied into the formal parameters
 * - different memory is allocated for actual & formal parameters.
 *   1. memory for actual paramater
 *   2. memory for formal parameter
 * - cannot modify the value of the actual parameter
 * 
*/

#include <stdio.h>

void change(int num){
    printf("start - call by value \n");
    printf("Before adding value inside function num = %d\n", num);
    num = num + 10;
    printf("After adding value inside function num = %d\n", num);
    printf("end - call by value \n");
}


// ============================================================================= 

/**
 * Call by Reference in C
 * 
 * -> change(int *num){}
 * 
 * -> int x = 100;
 * 
 * 1. pass the address of variable as actual parameter
 * 
 * -> change(&x); 
 * 
 * 2. the value of actual parameter can be modified by changing the formal param
 *    this becuase we pass the address of parameter.
 * 
 * 3. Memory allocation is the same for both formal and actual param;
 */


void changeByRef(int *num){
    printf("call by reference - start \n");
    printf("Before adding value inside function num = %d\n", *num);
    (*num) += 10;
    printf("After adding value inside function num = %d\n", *num);
    printf("call by reference - end \n");
}

int main(){
    int x = 10;
    printf("The actual variable: %d\n", x);

    change(x);
    printf("The actual variable after call by value: %d \n", x);
    printf("==============================================\n");

    changeByRef(&x);
    printf("The actual Variable after call by Reference: %d \n", x);
}

// src: https://www.javatpoint.com/call-by-value-and-call-by-reference-in-c 

