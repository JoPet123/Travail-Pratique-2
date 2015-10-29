#include <vld.h>
#include <iostream>
#include <SFML/Graphics.hpp>
#define LARGEUR 800
#define HAUTEUR 600

using namespace sf;

RenderWindow mainWin(VideoMode(LARGEUR, HAUTEUR, 32), "Projet");
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