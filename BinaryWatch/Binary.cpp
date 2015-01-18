#include <iostream>
#include "Binary.h"

using namespace std;

void Binary::ConvertToBinary(int num)
{
    if(num!=0)
    {
      Binary::r = num%2;
      Binary::hour[Binary::i++] = Binary::r;
      num /= 2;
      ConvertToBinary(num);
    }
}
