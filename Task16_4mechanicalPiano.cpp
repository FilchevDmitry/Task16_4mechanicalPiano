﻿#include <iostream>
enum note
{
    DO=1,
    RE=2,
    MI=4,
    FA=8,
    SOL=16,
    LA=32,
    SI=64
};
int main()
{
    int i = (1 << 0);
    std::cout << "Hello World!\n"<<i;
}

