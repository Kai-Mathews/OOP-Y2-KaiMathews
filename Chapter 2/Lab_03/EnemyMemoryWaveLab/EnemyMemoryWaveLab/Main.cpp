#include <iostream>
#include "Enemy.h"

int main() {
	std::cout << "Enemy wave memory lab\n" << std::endl;
	return 0;

	Enemy enemy;
	Enemy* pEnemy = new Enemy{ 1 };

	std::cout << Enemy::m_health << std::endl;
}

