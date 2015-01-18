#include <iostream>
#include <stdio.h>
#include "Binary.h"

using namespace std;

time_t  timev;


int main()
{
    Binary* binary = new Binary();
    binary->ConvertToBinary(2);
    return 0;
}
