// include standard io header, this is a header file that contain some 
// functionality for input and output operation.
// if you include this stdio header, it will imports different variables, macros
// and funciton to perform input and output operation.
// https://www.scaler.com/topics/stdio-h-in-c/ 
// 
# include <stdio.h> 

// I am a comment
/* this is also a comment */
int main(){
    printf("Hello world\n");
    printf("Answer: %d\n", 42); 
    printf("Name %s\n", "Fatah");
    printf("x %.1f i %d\n", 3.5, 100); // 3.5
    printf("x %.2f i %d\n", 3.5, 100); // 3.50
}

/*
 *  C programming doesn't know what kind of data you want to put into it, so you
 *  have to define the Type of the data to print it out.
 * 
 *  Different between single quote and double quote
 *  '': single quote = single character 
 *  "": double quote = character array, NOT A STRING 
 * 
 *  - New Line
 *    in C, every output statement is bare hand, it is just like you dump all of
 *    your program into one output, so if you want to make it every printf() 
 *    statement in different line, you have to define it. 
 *  
 *  - Embedded format in printf statement
 *    This embeded format code is telling the printf statement that there's 
 *    correlated argument of each, in this case the number in the second argument
 *    of printf() function.
 *    
 *    Embedded format is start by % 'percent' follows by type-pre-definer, in this
 *    case `d` is represent of decimal(integer number) that we want to convert
 *    that into string and print it out.  
 * 
 *    %d: decimal = integer number
 *    %s: string  = character array
 *    %.1f: float = floating point number.
 * 
*/