/*
 * function to keep track / update time and day
 */
#include <stdio.h>
#include <stdbool.h>

struct date 
{
	int month;
	int day;
	int year;
};

struct time 
{
	int hour;
	int minute;
	int second;
};

struct dateAndTime 
{
	struct date sdate;
	struct time stime;
};

struct dateAndTime clockKeeper (struct dateAndTime date_time)
{	
	struct date dateUpdate (struct date today);
	struct time timeUpdate (struct time now);

	date_time.stime = timeUpdate (date_time.stime);
	if (date_time.stime.hour == 0)
		if (date_time.stime.minute == 0)
			if(date_time.stime.second == 0)
				date_time.sdate = dateUpdate (date_time.sdate);
	
	return date_time;
}

struct time timeUpdate (struct time now)
{
	now.second++;

	if ( now.second == 60 )
	{
		now.second = 0 ;
		now.minute++;

		if ( now.minute == 60 )
		{
			now.minute = 0;
			now.hour++;

			if ( now.hour == 24 )
				now.hour = 0;
		}
	}

	return now;
}

struct date dateUpdate (struct date today)
{
	struct date tomorrow;
	int numberOfDays (struct date d );

	if ( today.day != numberOfDays (today) )
	{
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}
	else if ( today.month == 12 ) 
	{
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}
	else
	{
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}

	return tomorrow;
}

//Function to find the number of days in a month
int numberOfDays (struct date d ) 
{
	int days;
	bool isLeapYear (struct date d );
	const int daysPerMonth[12]=
	{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31 };

	if (isLeapYear && d.month == 2 )
		days = 29;
	else
		days = daysPerMonth[d.month - 1];

	return days;

}

//Function to determine if it's a lear year

bool isLeapYear (struct date d)
{
	bool leapYearFlag;

	if ( (d.year % 4 == 0 && d.year % 100 != 0 ) ||
			d.year % 400 == 0 )
		leapYearFlag = true;
	else
		leapYearFlag = false;
	
	return leapYearFlag;
}

int main (void)
{
	struct dateAndTime clockKeeper (struct dateAndTime date_time);
	struct dateAndTime date_time;
	int i;
	
	printf("Enter date m d y : ");
	scanf("%i %i %i", &date_time.sdate.month, &date_time.sdate.day, &date_time.sdate.year);

	printf("Enter time h:m:s ");
	scanf("%i:%i:%i", &date_time.stime.hour, &date_time.stime.minute, &date_time.stime.second);

	for (int i = 0; i < 60; i++ )
	{
		date_time = clockKeeper (date_time);
		printf("%2.2i/%2.2i/%4i   %2.2i:%2.2i:%2.2i \n", date_time.sdate.month, date_time.sdate.day,
				date_time.sdate.year, date_time.stime.hour, date_time.stime.minute,
				date_time.stime.second);
	}

	return 0;
}
