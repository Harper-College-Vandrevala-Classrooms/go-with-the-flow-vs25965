#pragma once
#include<vector>
#include <iostream>

using namespace std;
class HeatFlow
{
public:


	HeatFlow(double _initialTemp, int _lengthRod, double _contsK)
	{
		initialTemp = _initialTemp;
		lengthRod = _lengthRod;
		contsK = _contsK;
		Tempvec = vector <double> (lengthRod, initialTemp);
		Sourcevec = vector<double>(lengthRod, initialTemp); 
		Sinkvec = vector<double>(lengthRod, initialTemp); 
	}

	void tick();
	void prettyPrint();
	void set_sink(int position, double temperature);
	void set_source(int position, double temperature);


private:
	double initialTemp;
	int lengthRod;
	double contsK;
	vector<double> Tempvec;
	double deltaTime = 1;
	vector<double> Sourcevec; 
	vector<double> Sinkvec; 

};

