#include "stdafx.h"
#include "Clock.h"

using namespace std;

void Clock::Init()
{
	ftime(&start);
	hour = 23;
	minute = 29;
	second = 55;
}

void Clock::Update()
{
	ftime(&end);
	if((int) (1000.0 * (end.time - start.time) + (end.millitm - start.millitm)) > 1000)
	{
		second += 1;
		if (second >= 60)
		{
			second = 0;
			minute += 1;
			if(minute >= 60)
			{
				hour += 1;
				minute = 0;
				if(hour >= 24)
				{
					hour = 0;
					minute = 0;
					second = 0;
				}
			}
		}
		cout << minute << endl;
		start.millitm = end.millitm;
		start.time = end.time;
		end.millitm = 0;
		end.time = 0;
	}
}

int Clock::getHour()
{
	return hour;
}

int Clock::getMinute()
{
	return minute;
}