#include "stats.h"
/*Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>&a)
 {
    //std::vector<float> var = a;
    //1.5, 8.9, 3.2, 4.5
    //Implement statistics here
    //average
    //(1.5 + 8.9 + 4.5 / 3)
    
 //computedStats.avergae
    //min
//computedStats.min
    //max
    //store the calculated values toa  structure and return the structure
// computedStats.max
Stats r;
return r;
}*/
Stats Statistics::ComputeStatistics(const std::vector<float>& statistics_var) {
Stats Stats_obj;
float min , max;
min= statistics_var[0];
max=statistics_var[0];
for (int j = 1; j < statistics_var.size(); j++)
{
if( min > statistics_var[j])
min=statistics_var[j];
if( max < statistics_var[j])
max=statistics_var[j];
}
Stats_obj.max=max;
Stats_obj.min=min;
return Stats_obj;
}
int main()
{
//Statistics::ComputeStatistics();
return 0;
}
