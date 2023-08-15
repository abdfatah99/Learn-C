#include <stdio.h>

// [008] - include the external var or function
#include "003_1_extern.c"
#include "003_2_globalheader.h"

// [001] - auto keyword
int num2 = 20;
int AutoKeyword()
{
    /**
     * [GFG](www.geeksforgeeks.org/keywords-in-c/)
     * auto keyword in C is used to declare local scope variable. We can localize
     * variable into function scope or block scope variable
     * 
     * [OpenGenus](https://iq.opengenus.org/auto-in-c/)
     * auto - declare a local variable, access only within a function. 
     * auto - used for forward declaration of nested functions.
     * auto - can result in non-contiguous memory allocation.
     * 
     * important:
     * - memory allocated to the variable automatically on entering the function
     *   and freed on leaving the funtion
     * - auto keyword is rarely used as local variables have this behaviour by 
     *   default.
     * 
     * syntax: 
     * auto <data_type> <variable_name>;
    */

    // this is auto, behave as local variable scope
    auto int num = 10;
    // this also local variable scope (by default it has `auto` behaviour)
    int num2 = 10;

    printf("auto: Local scope variable, %d \n", num);

    /**
     * Auto keyword as forward declaration of nested functions. 
     * for example you have a nested function like this
     * 
     * -> # include <stdio.h>
     * -> int function_add()
     * -> { ...
     * ->    int function_inside_function_add()
     * ->    { ... }
     * ->    
     *       // call the nested function
     * ->    function_inside_function_add()
     * -> }
     * 
     * -> int main()
     * -> { 
     * ->      function_add();
     * ->      return 0
     * -> }
     * 
     * forward declaration means to add the function definition at the top of the
     * file and define it later. Aim -> for make the compiler aware that the 
     * function is exist.
     * for normal function we do it like: 
     * 
     * -> #include <stdio.h>
     * -> int function_add();
     * -> int function_inside_function_add();
     * 
     * -> int function()
     * -> { ...
     * ->    int function_inside_function_add()
     * ->    { ... }
     * ->    
     *       // call the nested function
     * ->    function_inside_function_add();
     * -> }
     * 
     * -> int main()
     * -> { 
     * ->      function_add();
     * ->      return 0
     * -> }
     * 
     * if you declare it inside function add, it will resulting an error
     * 
     * -> int function()
     * -> { ...
     * ->    int function_inside_function_add(); // error
     * 
     * ->    int function_inside_function_add();
     * ->    { ... }
     * ->    
     *       // call the nested function
     * ->    function_inside_function_add()
     * -> }
     * 
     * to solve it, you need to declare auto keyword
     * 
     * -> int function()
     * -> { ...
     * ->    auto int function_inside_function_add(); // error
     * 
     * ->    int function_inside_function_add();
     * ->    { ... }
     * ->    
     *       // call the nested function
     * ->    function_inside_function_add()
     * -> }
     *  
    */

    return num2;
}

// [002] - break and continue keyword
void BreakAndContinue() 
{
    /**
     * Break
     * - used to terminate the innermost loop. 
     * - usully used to terminate loop or a switch statement.
     * 
     * Continue;
     * - skips to next iterations
    */
   printf("This function loop for 10 times\n");

   for (int i = 1; i <= 10; i++)
   {
     if (i == 2)
     {
        // skip the iteration or continue the iteration, pass the loop
        continue;
     }
     if (i == 6)
     {
        // break or teminate the loop
        break;
     }

     printf("%d ", i);
   }
}

// [003] - switch, case, and default
void SwitcCaseAndDefault()
{
    int userInput;

    printf("Input your value: "); scanf("%d", &userInput);
    printf("Your input: %d \n", userInput);

    switch (userInput)
    {
    case 1:
        /* code */
        printf("Your input is covered in the case");
        break;

    default:
        printf("This Code is default case for the switch-case");
    }
}

// [004] - char, double, float, and const keyword
void CharDoubleFloatAndConstKeyword()
{
    /**
     * char is used to declare character variable. 
     * -> char x = 'D';
     * don't forget that char only use single quote.
     * 
     * double - decimal, 15 decimal digits
     * float - decimal, 7 decimal digits
    */

   char a = 'a';
   const float pi = 3.14;
   // if you try to change the const, it will resulting an error
   // error: assignment of read-only variable pi

   printf("result of char: %c \n", a);
   printf("const pi: %f", pi);
}

// [005] - do loop keyword
void DoKeyword()
{
    /**
     * do statement used to declare loop statement. The mechanism is do the code 
     * first, then check the termination, if the termination is fullfill, then 
     * stop the loop.
     * 
     * Note: Do always execute the code first then check the termination.
    */

   int number = 0; 
   do 
   {
    printf("%d", number);
    // increment the number
    number++;
   } while (number < 5);
}

// [006] - if else statement
void IfElseStatement()
{
    int value = 10; 
    if (value == 10)
    {
        printf("Your score is perfect");
    }
    else
    {
        printf("your score is good");
    }
}

// [007] - enum keyword
void enumKeyword()
{
    /**
     * enum (enumeration) is a data type for holding multiple constant. 
     * 
     * -> enum flag {constant1, constant2, constant3, ..., constantN}; 
     * 
     * each constant has its own default value, and the default value of each 
     * constant is: 
     * 
     * -> constant1 = 0, constant2 = 1, constant3 = 2 and soon.
     * 
     * Imporant: default value start with 0;
     * 
     * Note: this is like enumerate() function in python
     * 
     * you can change the default value of the enum during the declaration.
     * 
     * -> enum suit {
     * ->   club = 0,
     * ->   diamonds 10,
     * ->   hearts = 20,
     * ->   spades = 3, 
     * -> };
     * 
     * additional resource:
     * https://www.programiz.com/c-programming/c-enumeration 
     * 
    */

   enum Week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

   enum Week todayIndex; // declaring an Week-enum variable.
   todayIndex = Tuesday;
   printf("Today index: %d \n\n", todayIndex+1);

   // another way to declare enum variable then immediately declaring the variable
   enum skin {blood, name, character, status} zoro;
   printf("Index of 'name' in skin properties: %d", zoro=name+1); 
   // +1 because index start at 0
}

// [008] - extern keyword
void ExternKeyword()
{
    /**
     * extern, used declare variable (as global) that can be invoke by different
     * scope in the same file or different file. 
     * only declare variable, not define a variable.
     * 
     * -> extern data_type variable_name;
     * 
     * best-case: declare function or variable as global and to use them in the 
     *            different scope
     * 
     * this is like import statement in js
     * 
     * if a code exist like this
     * 
     * -> extern float external_value; 
     * 
     * you can read that as "we declare a variable named 'external_value', this 
     * variable is exist in somewhere along with the program. But now, we are not
     * allocate memory for them."
     * 
     * source:
     * https://www.geeksforgeeks.org/understanding-extern-keyword-in-c/
     * https://www.scaler.com/topics/c-extern/
    */

    // declare (import) external variable;
    extern float external_value;
    printf("External Value: %f \n", external_value);

    // call (import-like from exported extern in globalheader.h file)
    printf("External from header file: %d, %s", birth, name);


}


int main() 
{
    // [001] - Auto keyword
    printf("========== auto keyword ==========\n");
    int result = AutoKeyword();
    printf("num2: %d \n", num2);
    printf("result: %d", result);

    printf("\n\n========== break and continue ==========\n");
    BreakAndContinue();

    printf("\n\n========== Switch, Case and Default ==========\n");
    // SwitcCaseAndDefault();

    printf("\n\n========== Char and Const Keyword ==========\n");
    CharDoubleFloatAndConstKeyword();

    printf("\n\n========== do (Loop) keyword ==========\n");
    DoKeyword();

    printf("\n\n========== if else statement ==========\n");
    IfElseStatement();

    printf("\n\n========== enum keyword ==========\n");
    enumKeyword();

    printf("\n\n========== extern keyword ==========\n");
    ExternKeyword();

    return 0;
}
