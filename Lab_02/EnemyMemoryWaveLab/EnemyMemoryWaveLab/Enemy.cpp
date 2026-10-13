#include <iostream>
#include "Enemy.h"

void Enemy::takeDamage(int t_amount) {
	
	if (m_health <= 0)
	{
		m_health = 0;
	}
	else
	{
		if (t_amount <= 0)
		{
			m_health = m_health;
		}
		else if (t_amount > 0)
		{
			m_health = m_health - t_amount;
		}
	}
}

int Enemy::health() const {
	return m_health;
}

bool Enemy::isAlive() const {
	if (m_health > 0)
	{
		return true;
	}
}

