#include "Beacon.h"

Beacon::Beacon(int t_x)
{
	t_x = m_x;
}
 
int Beacon::x() const
{
	return m_x;
}

int Beacon::strength() const
{
	return m_strength;
}

bool Beacon::active() const
{
	return m_active;
}
