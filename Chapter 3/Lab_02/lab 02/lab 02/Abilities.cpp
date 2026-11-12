#include "abilities.h"
#include <iostream>

GameAbility::GameAbility(int t_power)
{
	m_power = t_power;
}

int GameAbility::power() const
{
	return m_power;
}

void GameAbility::activate() const
{
	std::cout << "Generic Ability \n";
}

ShieldAbility::ShieldAbility(int t_power) : GameAbility{t_power}
{
	t_power = ;
}