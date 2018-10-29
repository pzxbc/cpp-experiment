#include <iostream>
#include "Timer.h"

using namespace std;

void testAdd()
{
    // MacOS Intel i5 2.7GHZ
    // clang++ 默认优化
    // 如果开了"-O3"优化，下面代码执行时0ms...
    // add_times: 100000000 => 887459712 within 294 milliseconds
    int add_times = 100000000;
    int res = 0;
    Timer timer;
    for (int i = 0; i < add_times; i++)
    {
        res += i;
    }
    auto elapsed_time = timer.elapsed();
    cout << "add_times: " << add_times << " => " << res << " within " << elapsed_time << " milliseconds" << endl;
}

int main()
{
    testAdd();
    return 0;
}