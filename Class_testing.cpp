#include <iostream>
#include "classnest_forsure.h"

int main()
{
	playerstruct player;

	player.health = 100;
	std::cout << player.health << std::endl;

	player.damage(50);
	std::cout << player.health << std::endl;
	
	player.heal(55);
	std::cout << player.health << std::endl;

	player.bothmaybe(-50);
	std::cout << player.health << std::endl; // should produce 55 or whatever is subtracted from health at the time.

	player.bothmaybe(50);
	std::cout << player.health << std::endl; // should produce 105 or whatever is subtracted from health at the time.

	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";

	player.x = 5;
	player.y = 4;
	player.z = 3;
	std::cout << player.x << " " << player.y << " " << player.z;
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";

	player.moving(40, 41, 42);
	std::cout << player.x << " " << player.y << " " << player.z; // should output 45 all around


}
