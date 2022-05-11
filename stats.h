#include <vector>


typedef auto Stats;
namespace Statistics {

typedef struct computedStats
{
    float average;
    float min;
    float max;
}computedStats;

    Stats ComputeStatistics(const std::vector<float>& );
}
