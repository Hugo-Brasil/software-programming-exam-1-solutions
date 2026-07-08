#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{

/*
    TITLE: MY SOLUTIONS TO ALL EXAMS FROM THE SOFTWARE PROGRAMMING COURSE

    This source file is part of the series "MY SOLUTIONS TO ALL EXAMS FROM THE SOFTWARE PROGRAMMING COURSE". It contains my 
    solution to Question 1 of Exam 1 from the Software Programming course, which I completed in the first semester of my Computer 
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
    QUESTION 1
    1. Read three integer numbers. Display how many of them are negative.

*/

//-------------------------------------------------------------------------------------------------------------------------------

/*

    SECTION 1
    In this section, the variables `x`, `y`, `z`, and `count_of_negative_numbers` are declared as integers.
    
    Note:
    The variable `count_of_negative_numbers` must be initialized to zero because otherwise the variable 
    would contain an indeterminate value from memory and, therefore, it would not display the correct 
    result.

*/

int x;
int y;
int z;
int count_of_negative_numbers = 0;

//-------------------------------------------------------------------------------------------------------------------------------

/*

    SECTION 2
    In this section, the code responsible for reading and storing the values entered by the user is implemented.

*/

scanf("%i", &x);
scanf("%i", &y);
scanf("%i", &z);

//-------------------------------------------------------------------------------------------------------------------------------

/*

    SECTION 3
    In this section, the code verifies whether each number entered by the user (`x`, `y`, and `z`) is negative.
    If so, the variable `count_of_negative_numbers` is incremented.

*/

if (x < 0)
{
    count_of_negative_numbers++;
}

if (y < 0)
{
    count_of_negative_numbers++;
}

if (z < 0)
{
    count_of_negative_numbers++;
}

//-------------------------------------------------------------------------------------------------------------------------------

/*
    SECTION 4
    In this section, the code displays the final count of negative numbers entered by the user.
*/

printf("%i", count_of_negative_numbers);

//-------------------------------------------------------------------------------------------------------------------------------

/*
    (End of QUESTION 1 solution)
*/

//-------------------------------------------------------------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    return 0;
}