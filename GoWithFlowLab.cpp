
#include <iostream>
#include <vector>
#include"HeatFlow.h"

int main()
{
    // My program has a set_sink(position in vector (index in vector) and (value of temp for sink)
    //the set_source method works the same way as the set_sink method
    //the HeatFlow object accepts(Intial Temp, length of vector, value for constant K 

    //This set up checks behavior of temperature having  sources at the end of the vector 
    HeatFlow obj(10,10,0.1);
    obj.set_source(0,12);
    obj.set_source(9, 12);
    obj.tick();
    obj.tick();
    obj.tick();
    obj.tick();
    obj.tick();
    obj.tick();
    obj.tick();
    obj.prettyPrint();
    
    
    return 0;
}