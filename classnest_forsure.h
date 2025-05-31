#pragma once

#include <iostream>


class playerstruct
{
public:
	int health;
	float x, y, z; // position
	int ammo;
	float velocity;



	void damage(int subhealth) // subtracts health
	{
		health -= subhealth;
	}

	void heal(int addhealth) // adds health
	{
		health += addhealth;
	}


	void bothmaybe(int modifier)
	{
		if (modifier < 0)
		{
			health += modifier;
		}
		else if (modifier > 0)
		{
			health += modifier;
		}
	}

	void moving(int xm, int ym, int zm)
	{
		x += xm;
		y += ym;
		z += zm;
	}
};
