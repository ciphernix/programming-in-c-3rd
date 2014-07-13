/*
 * Chapter 09 Exercise 03. Program to calculate elapsed time between two structs.
 *
 */
#include <stdio.h>

struct time {
	int hour;
	int minute;
	int second;
};

struct time elapsed_time (struct time time1, struct time time2)
{
	struct time return_time;

	return_time.second = (time2.second - time1.second) % 60;
	return_time.minute = (time2.minute - time1.minute) % 60;
	return_time.hour = (time2.hour - time1.hour) % 24;

	if ( return_time.second < 0 )
	{
		return_time.second += 60;
		return_time.minute -= 1;
	}

	if ( return_time.minute < 0 )
	{
		return_time.minute += 60;
		return_time.hour -= 1;
	}
	
	if (return_time.hour < 0 )
		return_time.hour = 24 + return_time.hour;

	return return_time;

}

int main (void)
{
	struct time elapsed_time (struct time time1, struct time time2);
	struct time time1, time2, elapsed;

	printf("Scanf enter time 1 h:m:s ");
	scanf("%i:%i:%i", &time1.hour, &time1.minute, &time1.second);

	printf("Scanf enter time 2 h:m:s ");
	scanf("%i:%i:%i", &time2.hour, &time2.minute, &time2.second);
	
	elapsed = elapsed_time (time1, time2);
	printf("%i:%i:%i\n",elapsed.hour,elapsed.minute,elapsed.second);

	return 0;
}
