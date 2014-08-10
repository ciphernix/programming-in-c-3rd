/*
 * Chapter 13 include files.
 * All custom #defines are in here.
 */
#define MIN(x,y) ( (x) < (y) ? (x) : (y) )
#define MAX3(x,y,z) ( (x) > (y) ? ( (x) > (z) ? (x) : (z) ) : ( (y) > (z) ? (y) : (z) ) )
#define shift(value,n) ( (n) > 0 ? (value) << (n) : ((n) < 0 ? (value) >> (-(n)) : value) )
#define IS_UPPER_CASE(c) ( ((c) >= 'A' && (c) <= 'Z' ) ? 1 : 0 )
#define IS_LOWER_CASE(c) ( ((c) >= 'a' && (c) <= 'z' ) ? 1 : 0 )
#define IS_ALPHABETIC(c) ( (IS_UPPER_CASE((c)) || IS_LOWER_CASE((c)) ? 1 : 0) )
#define IS_DIGIT(c) ( ((c) >= '0' && (c) <= '9' ) ? 1 : 0)
#define IS_SPECIAL(c) ( (IS_ALPHABETIC((c)) || IS_DIGIT((c)) ) ? 0 : 1 )
#define ABSOLUTE_VALUE(x) ( ((x) >= 0 ) ? x : -(x) )
