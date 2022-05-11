#include <vector>

typedef auto Stats;
typedef auto computedStats
{
    float average;
    float min;
    float max;
}computedStats;

namespace Statistics {

    Stats ComputeStatistics(const std::vector<auto>& );
}
