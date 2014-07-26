/*
 * Chapter 11 exercise 10:
 * Rewrite the compareStrings function from Chapter 10 to yse character pointers
 * instead of arrays.
 */

#include <stdio.h>

/* Original function for reference
 *
 * int compareStrings (const char s1[], const char s2[])
 *{
 *       int i = 0, answer;
 *
 *        while ( s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' )
 *               i++;
 *
 *       if ( s1[i] < s2[i] )
 *               answer = -1;    // s1 < s2
 *       else if (s1[i] == s2[i] )
 *               answer = 0;     // s1 == s2 
 *       else 
 *               answer = 1;     // s1 > s2 
 *
 *       return answer;
 * }
*/


