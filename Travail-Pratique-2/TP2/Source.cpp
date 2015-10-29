#include <vld.h>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Personnage.h"
#include "Mur.h"


using namespace sf;

const int WIDHT = 1280;
const int HEIGHT = 720;

RenderWindow mainWin(VideoMode(WIDHT, HEIGHT, 32), "Fury");
View view(mainWin.getDefaultView());
Event event;

void Init();
void GetInputs();
void Update();
void Draw();

int main()
{
	Init();

	while (mainWin.isOpen())
	{
		GetInputs();
		Update();
		Draw();
	}

	return EXIT_SUCCESS;
}

void Init()
{
	mainWin.setFramerateLimit(60); 
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