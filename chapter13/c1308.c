/*
 *Chapter 13 exercise 8:
 *Write a macro IS_DIGIT that gives a nonzero value if a character is a digit 
 *'0' through '9'. Use this macro in the definition of another macro 
 *IS_SPECIAL, which gives a nonzero result if a character is a special 
 *character; that is, not alpha- betic and not a digit. Be certain to use the 
 *IS_ALPHABETIC macro developed in exercise 7.
 */

#include <stdio.h>

#define IS_UPPER_CASE(c) ( ((c) >= 'A' && (c) <= 'Z' ) ? 1 : 0 )
#define IS_LOWER_CASE(c) ( ((c) >= 'a' && (c) <= 'z' ) ? 1 : 0 )
#define IS_ALPHABETIC(c) ( (IS_UPPER_CASE((c)) || IS_LOWER_CASE((c)) ? 1 : 0)

