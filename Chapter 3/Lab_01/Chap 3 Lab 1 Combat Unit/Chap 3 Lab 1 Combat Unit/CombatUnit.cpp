#include <iostream>
#include "CombatUnit.h"

CombatUnit::CombatUnit(int t_health)
{
	m_health = t_health;
	std::cout << "+ CombatUnit" << std::endl;
	std::cout << "Health: " << m_health << std::endl;
	std::cout << "Power: " << 0 << std::endl;
}

CombatUnit::~CombatUnit()
{
	std::cout << "- CombatUnit" << std::endl;
}

int CombatUnit::health() const
{
	return m_health;
}

int CombatUnit::attackPower() const
{
	return 0;
}

