#include <stdio.h>

/*

What does Pointer mean?

1. Pointer is a variable
2. used to store a memory address of another variable
3. allow you to manipulate data INDIRECTLY

   Before you get into "Indirectly", let's understand how C store a value of Variable
   1. Declare a variable (A)
   2. assign a memory address of variable (A)

   A Pointer variable can be declared to hold this memory address, allowing to
   access, manipulate the value at that memory address

    Inderectly example
    // declare a variable
    -> int x = 5

    // create an int pointer to hold the address of x
    // use & to obtain the memory address of x.
    -> int *p = &x

    p is used to store a memory address that pointing to x, we can manipulate
    this x using p. 

    This is when the asterisk come in hand, The Asterisk (*) operator is used to
    dereference the pointer and access the value at the memory location.

    let's assign new value

    -> *p = 10;

    this code mean: assign value 10 to memory location that p points to.
    (which is the memory location of x)
*/

/*
This function expected int * (integer of pointers)
*/
void changeByReference(int *num){
    (*num) +=10;
}

int main(){
    int x = 10;
    // changeByReference(x); - error, because argument is only an integer (value)

    // passing the pointers
    changeByReference(&x);

    // printf(x) - error, if you want to print, you should casting it to string

    printf("x value: %d", x);
}

/*
    asterisk (*)

    the asterisk (*) in C is used to declare and manipulate pointer

    -> int *num

    declare num as pointer to an integer variable
    The * is used to DEREFERENCE the pointer to obtain the value of 
    the integer-variable it is pointing to. Which mean: 

    -> *num ----pointing to---> x variable which hold 10

    The code

    -> (*num) += 10 
         ^
    -> (*num) ----dereference the pointer to obtain the integer value----
    -> += 10  ----and incerement by 10 


    summary, * is: 
    - symbol to declare a pointer
    - DEREFERENCE a pointer to obtain the value it is pointing to.

    Pointers can be very useful in C programming, but they require careful 
    management to avoid errors such as segmentation faults or invalid memory 
    accesses.
*/