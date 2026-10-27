#include <iostream>
#include "Receiver.h"
#include "Beacon.h"

int main() 
{
	std::cout << "Checking Connection\n";
	Beacon demoBeacon{10};
	Receiver receiver{35};
	std::cout << "Range to beacon: " << receiver.rangeTo(demoBeacon) << '\n';
}