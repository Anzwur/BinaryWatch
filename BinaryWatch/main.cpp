#include <iostream>
#include <stdio.h>
#include<time.h>

using namespace std;
int count = 0;
int hour[64];
int i=0,r;
void ConvertToBinary(int num)
{
    if(num!=0)
    {
      r = num%2;
      hour[i++] = r;
      num /= 2;
      ConvertToBinary(num);
    }
}

int main()
{
    ConvertToBinary(2);
    for(int j=i-1;j>=0;j--)
        cout<<hour[j];

    return 0;
}
