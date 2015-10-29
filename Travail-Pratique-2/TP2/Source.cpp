#include <vld.h>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Personnage.h"
#include "Mur.h"


using namespace sf;

const int WIDHT = 1280;
const int HEIGHT = 720;

const int VITESSE = 10;

const int NB_FRAME_IMMOBILE = 16;
const int NB_FRAME_MOUV = 8;
const int NB_FRAME_ATTAQUE = 18;
const int NB_NIVEAUX = 8;

RenderWindow mainWin(VideoMode(WIDHT, HEIGHT, 32), "Fury");
View view(mainWin.getDefaultView());
Event event;

Sprite background;
Texture Tbackground;
Vector2f backgroundPos[18];

Personnage * Personnage1;
Vector2f interfaceDeplacement;

bool Init();
void GetInputs();
void Update();
void Draw();

int main()
{
	if (!Init())
	{
		return EXIT_FAILURE;
	}

	while (mainWin.isOpen())
	{
		GetInputs();
		Update();
		Draw();
	}

	delete Personnage1;

	return EXIT_SUCCESS;
}

bool Init()
{
	mainWin.setFramerateLimit(60); 

	if (!Tbackground.loadFromFile("Sprites\\tile1.png"))
	{
		return false;
	}

	if (!Personnage::ChargerTextures("Sprites\\PersoIddle.png", "Sprites\\PersoCourse.png", "Sprites\\attaque.png"))
	{
		return false;
	}

	background.setTexture(Tbackground);

	Personnage1 = new Personnage(WIDHT / 2, 100.0f, VITESSE, 6, NB_NIVEAUX, NB_FRAME_IMMOBILE, NB_FRAME_MOUV, NB_FRAME_ATTAQUE, &mainWin);
	Personnage1->AjustementsVisuels();

	interfaceDeplacement.x = 0;
	interfaceDeplacement.y = 0;
	
}

void GetInputs()
{
	while (mainWin.pollEvent(event))
	{
		if (event.type == Event::Closed)
		{
			mainWin.close();
		}
	}
}

void Update()
{

}

void Draw()
{
	mainWin.clear();

	//mainWin.draw()

	mainWin.display();
}