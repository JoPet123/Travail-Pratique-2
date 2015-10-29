#pragma once

#include <vld.h>
#include <SFML\Graphics.hpp>
#include <iostream>
#include "Orientation.h"


class Mur
{
private:
	float longueure;
	float largeur;
	float posX;
	float posY;
	orientation ori;
public:
	Mur(float posX, float posY, float largeur, float longueure);
	~Mur();
	bool DetecterCollision();
	void GererCollision();
	void AjustementsVisuels();
};