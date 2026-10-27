#include "Archer.h"
#include <iostream>

Archer::Archer(int t_health, int t_arrowPower)
	: CombatUnit(t_health)
{
	t_arrowPower = m_arrowPower;

	std::cout << "+ Archer" << std::endl;
}

Archer::~Archer()
{
	std::cout << "- Archer" << std::endl;
}

int Archer::arrowPower() const
{
	return m_arrowPower;
}

int Archer::attackPower() const
{
	return m_arrowPower;
}