#include <iostream>
#include <stdio.h>

using namespace std;
void ConvertToBinary(int n)
{
    if (n / 2 != 0) {
        ConvertToBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main()
{
    ConvertToBinary(2);
    return 0;
}
