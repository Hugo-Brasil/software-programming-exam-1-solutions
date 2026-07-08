#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{

/*
    TITLE: MY SOLUTIONS TO ALL EXAMS FROM THE SOFTWARE PROGRAMMING COURSE

    This source file is part of the series "MY SOLUTIONS TO ALL EXAMS FROM THE SOFTWARE PROGRAMMING COURSE". It contains my 
    solution to Question 2 of Exam 1 from the Software Programming course, which I completed in the first semester of my Computer 
    Science degree at the University Center of the State of Pará (CESUPA) in 2026. The source code is written in C.
     
    Each solution consists of a source code file divided into two or more sections to clearly indicate not only its beginning
    and end, but also its purpose, as follows:

    {
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    EXAM 1
    *ALL QUESTIONS*

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    QUESTION 1
    Question statement.
    -------------------------------------------------------------------------------------------------------------------------------
    SECTION 1 or ITEM A
    BRIEF DESCRIPTION OF THIS SECTION
    ...
    -------------------------------------------------------------------------------------------------------------------------------
    SECTION 2 or ITEM B
    BRIEF DESCRIPTION OF THIS SECTION
    ...
    -------------------------------------------------------------------------------------------------------------------------------
    ...
    (End of QUESTION 1 solution)
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    }

*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    EXAM 1
    Instructions:
    - Use only `if` statements;
    - Do not use `else`;

    1. Read three integer numbers. Display how many of them are negative.
    2. Read X and Y. If X is greater than or equal to Y, display whether half of Y is a multiple of nine.
    3. Read the values of day, month, and year. Taking into consideration that today is March 13, 2026, display whether the entered 
    date is in the past.

    Note:
    This was a written exam, which means that the students had to write all the code by hand. It is worth noting that user 
    instructions were not required as part of the solutions to the questions. 

*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    QUESTION 2
    1. Read X and Y. If X is greater than or equal to Y, display whether half of Y is a multiple of nine.

*/

//-------------------------------------------------------------------------------------------------------------------------------

/*

    SECTION 1
    The variables `x`, `y`, and `remainder` are declared as integers.

    Commentary:
    In order to determine whether half of `y` is a multiple of nine, it is necessary to verify whether the remainder obtained by 
    dividing half of `y` by nine is equal to zero. If it is, then half of `y` is a multiple of nine. Otherwise, then half of `y` 
    is not a multiple of nine.   

*/

int x;
int y;
int remainder;

//-------------------------------------------------------------------------------------------------------------------------------

/*

    SECTION 2
    The code that reads the integers `x` and `y` entered by the user is implemented.

*/

scanf("%i", &x);
scanf("%i", &y);

//-------------------------------------------------------------------------------------------------------------------------------

/*

    SECTION 3
    The code that calculates the `remainder` of half of `y` divided by nine is implemented. 

    Commentary:
    The symbol `%` between two numbers is the modulo operator, which is useful to calculate the remainder 
    of an integer division.

*/

remainder = (y/2)%9;

//-------------------------------------------------------------------------------------------------------------------------------

/*
    SECTION 4
    The code that identifies whether half of `y` is a multiple of nine if `x` is greater than or equal to 
    `y` is implemented.

*/

if (x >= y && remainder == 0)
{
    printf("The value of half of `y` is a multiple of nine.");
}

if (x >= y && remainder != 0)
{
    printf("The value of half of `y` is not a multiple of nine.");
}

//-------------------------------------------------------------------------------------------------------------------------------

/*
    (End of QUESTION 2 solution)
*/

//-------------------------------------------------------------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    return 0;
}