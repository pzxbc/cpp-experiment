#include<chrono>

using namespace std;
using namespace std::chrono;

class Timer
{
public:
    Timer();

    void reset();

    // 默认输出毫秒
    int64_t elapsed() const;
    int64_t elapsed_nano() const;
    int64_t elapsed_micro() const;
    int64_t elapsed_seconds() const;
    int64_t elapsed_minutes() const;
    int64_t elapsed_hours() const;

private:
    time_point<high_resolution_clock> begin;
};
