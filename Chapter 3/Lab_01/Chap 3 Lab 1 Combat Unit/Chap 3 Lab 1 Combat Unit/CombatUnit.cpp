#include <iostream>
#include "CombatUnit.h"

CombatUnit::CombatUnit(int t_health)
{
	m_health = t_health;
	std::cout << "Health is " << m_health << std::endl;
}

CombatUnit::~CombatUnit()
{
	//std::cout << "object destroyed" << std::endl;
}

int CombatUnit::health() const
{
	return m_health;
}

int CombatUnit::attackPower() const
{
	return 0;
}