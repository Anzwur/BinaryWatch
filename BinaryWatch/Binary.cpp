#include "stdafx.h"
#include "Binary.h"

using namespace std;

void Binary::ConvertToBinary(int num)
{
    if(num!=0)
    {
      r = num%2;
      hour[i++] = r;
      num /= 2;
      ConvertToBinary(num);
    }
}

void Binary::printArray()
{
	for(int j=i-1;j>=0;j--)
		cout<<hour[j];
	cout << endl;
}
