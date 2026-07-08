#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{

/*
    TITLE: MY SOLUTIONS TO ALL EXAMS FROM THE SOFTWARE PROGRAMMING COURSE

    This source file is part of the series "MY SOLUTIONS TO ALL EXAMS FROM THE SOFTWARE PROGRAMMING COURSE". It contains my 
    solution to Question 3 of Exam 1 from the Software Programming course, which I completed in the first semester of my Computer 
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
    QUESTION 3
    3. Read the values of day, month, and year. Taking into consideration that today is March 13, 2026, display whether the entered 
    date is in the past.

*/

//-------------------------------------------------------------------------------------------------------------------------------

/*
    SECTION 1
    The variables `day`, `month`, and `year` are declared as integers.
*/

int day;
int month;
int year;


//-------------------------------------------------------------------------------------------------------------------------------

/*

    SECTION 2
    The code that reads and stores the values entered by the user for the variables `day`, `month`, and `year` 
    is implemented.

*/

scanf("%i", &day);
scanf("%i", &month);
scanf("%i", &year);

//-------------------------------------------------------------------------------------------------------------------------------

/*

    SECTION 3
    The code that identifies whether the entered date is in the past is and prints a message when it is is implemented.

*/


if (day < 13 && month == 3 && year == 2026)
{
    printf("The entered date is in the past.");
}

if (month < 3 && year == 2026)
{
    printf("The entered date is in the past.");
}

if (year < 2026)
{
    printf("The entered date is in the past.");
}

//-------------------------------------------------------------------------------------------------------------------------------

/*
    (End of QUESTION 3 solution)
*/

//-------------------------------------------------------------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    return 0;
}