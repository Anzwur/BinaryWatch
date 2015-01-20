#ifndef CLOCK_H
#define CLOCK_H

class Clock
{
public:
	void Update();
	void Init();
	int getHour();
	int getMinute();
private:
	struct timeb start, end;
	int diff;
	int hour, minute, second;
};

#endif
