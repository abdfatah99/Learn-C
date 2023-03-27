# include <stdio.h>

int main(){
    /* in C-family programming language, you have to declare the variable,
     * include with the data type of the variable */
    int usf, euf;

    printf("Enter US Floor\n");
    scanf("%d", &usf); // call by reference
    euf = usf - 1;
    printf("EU Floor %d\n", euf);
}

// see 003-1 for more explanation abot call by reference & call by value