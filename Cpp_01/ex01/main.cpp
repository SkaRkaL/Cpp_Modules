#include "include/Zombie.hpp"

#define N 7

int main()
{
	Zombie *LstOfZombie;

	LstOfZombie = zombieHorde(N, "Foo");
	for (int i = 0; i < N; i++)
		LstOfZombie[i].announce();
	delete[] LstOfZombie; // since i used "new[]" i should use "delete[]"
}
