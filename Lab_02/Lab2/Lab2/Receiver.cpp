#include "Receiver.h"
#include "Beacon.h"
#include <cstdlib>
#include <iostream>

Receiver::Receiver(int t_x)
{
	m_x = t_x;
}

int Receiver::rangeTo(Beacon const& t_beacon) const
{
	int diff = 0;

	diff = m_x - t_beacon;

	if (diff < 0)
	{
		diff = diff + diff;
	}
	return diff;
}