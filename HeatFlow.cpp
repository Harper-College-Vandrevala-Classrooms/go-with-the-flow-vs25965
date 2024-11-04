#include "HeatFlow.h"

void HeatFlow::tick()
{
    vector<double> newTemps = Tempvec; // Start with the current temperatures

    for (int i = 1; i < lengthRod - 1; ++i)
    {
        if (Sourcevec[i] == initialTemp && Sinkvec[i] == initialTemp) // Only update if it's not a source or sink
        {
            newTemps[i] = Tempvec[i] + contsK * deltaTime * (Tempvec[i + 1] - 2 * Tempvec[i] + Tempvec[i - 1]);
        }
    }

    // Handle boundary conditions (assuming fixed temperatures at the ends)
    newTemps[0] = Tempvec[0];
    newTemps[lengthRod - 1] = Tempvec[lengthRod - 1];

    Tempvec = newTemps;

    // Increase deltaTime for the next tick
    deltaTime += 1.0;
}

void HeatFlow::set_source(int position, double temperature)
{

        Tempvec[position] = temperature;
        Sourcevec[position] = temperature; // Mark this position as a source
 
  
}

void HeatFlow::set_sink(int position, double temperature)
{
        Tempvec[position] = temperature;
        Sinkvec[position] = temperature; // Mark this position as a sink
}

void HeatFlow::prettyPrint()
{
    cout << "Floww: ";
    for (double temp : Tempvec)
    {
        cout << temp << " ~~~ ";
    }
    cout << endl;

}

