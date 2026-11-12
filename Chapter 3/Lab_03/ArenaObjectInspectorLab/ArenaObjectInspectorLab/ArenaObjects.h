#pragma once
class ArenaObject
{
public:
	virtual ~ArenaObject() = default;
	virtual void report() const = 0;
};
class Guard : public ArenaObject
{
public:
	explicit Guard(int t_health);
	void report() const override;
	int health() const;
private:
	int m_health;
};
class EliteGuard : public ArenaObject
{
public:
	EliteGuard();
	~EliteGuard();

private:

};

class SupplyCrate : public ArenaObject
{
public:
	SupplyCrate();
	~SupplyCrate();

private:

};