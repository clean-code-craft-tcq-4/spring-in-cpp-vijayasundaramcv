#include <vector>


//typedef auto Stats;
namespace Statistics {

typedef struct Stats
{
    float average;
    float min;
    float max;
}Stats;

   Stats ComputeStatistics(const std::vector<float>& );

    
}
