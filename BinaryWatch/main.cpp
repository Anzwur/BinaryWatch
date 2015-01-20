#include "stdafx.h"
#include "Clock.h"
#include "Binary.h"

using namespace std;


int main()
{
	Clock* clock = new Clock();
    Binary* binary = new Binary();
	clock->Init();

	int hourNow, minuteNow;

	while(true)
	{
		clock->Update();
	}

	system("pause");
    return 0;
}
