// HelloSFML.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;
int main()
{
	//Declare variables here
	bool start = false; //Determines whether or not game should remain on title screen or go to character select
	bool Beter = false;

	//Render game window  
	VideoMode vm(1920, 1080);
	RenderWindow window(vm, "Academy Fight Club", Style::Fullscreen);

	srand((int)time(0)); //Seed RNG using current time

	//Load textures and sprites into memory
	Texture titleLogo;
	titleLogo.loadFromFile("graphics/logo.png");
	Texture titleBG1;
	titleBG1.loadFromFile("graphics/background1.png");
	Texture titleBG2;
	titleBG2.loadFromFile("graphics/background2.png");
	Texture iconAndrew;
	iconAndrew.loadFromFile("graphics/andrew.png");
	Texture iconLiam;
	iconLiam.loadFromFile("graphics/liam.png");
	Texture iconBrad;
	iconBrad.loadFromFile("graphics/brad.png");
	Texture iconPeter;
	iconPeter.loadFromFile("graphics/peter.png");
	Texture iconAlex;
	iconAlex.loadFromFile("graphics/alexander.png");
	Texture iconRomie;
	iconRomie.loadFromFile("graphics/romie.png");
	Sprite titleLogoSprite;
	titleLogoSprite.setTexture(titleLogo);
	titleLogoSprite.setPosition(660, 100);
	Sprite titleBG1Sprite;
	titleBG1Sprite.setTexture(titleBG1);
	titleBG1Sprite.setPosition(0, 0);
	Sprite titleBG2Sprite;
	titleBG2Sprite.setTexture(titleBG2);
	titleBG2Sprite.setPosition(0, 0);
	Sprite icoAndySprite;
	icoAndySprite.setTexture(iconAndrew);
	icoAndySprite.setPosition(60, 40);
	Sprite icoLiamSprite;
	icoLiamSprite.setTexture(iconLiam);
	icoLiamSprite.setPosition(260, 40);
	Sprite icoBradSprite;
	icoBradSprite.setTexture(iconBrad);
	icoBradSprite.setPosition(460, 40);
	Sprite icoPeterSprite;
	icoPeterSprite.setTexture(iconPeter);
	icoPeterSprite.setPosition(660, 40);
	Sprite icoAlexSprite;
	icoAlexSprite.setTexture(iconAlex);
	icoAlexSprite.setPosition(860, 40);
	Sprite icoRomieSprite;
	icoRomieSprite.setTexture(iconRomie);
	icoRomieSprite.setPosition(1060, 40);

	//Code to be run while game window is open
	while (window.isOpen())
	{
		//Handle player input
		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}
		if (Keyboard::isKeyPressed(Keyboard::Return))
		{
			start = true;
		}
		if (Mouse::isButtonPressed(Mouse::Left) && icoPeterSprite.getGlobalBounds().contains((Vector2<float>)Mouse::getPosition()))
		{
			window.close();
			Beter = true;
		}
		//Update scene

		//Draw scene
		window.clear(); //Clear previous frame
		if (!start) //Do these things if user has not pressed Enter yet
		{
			window.draw(titleBG1Sprite);
			window.draw(titleLogoSprite);
		}
		if (start) //If the user has pressed Enter, do these things instead
		{
			window.draw(titleBG2Sprite);
			window.draw(icoAndySprite);   
			window.draw(icoLiamSprite);  
			window.draw(icoBradSprite);
			window.draw(icoPeterSprite);
			window.draw(icoAlexSprite);
			window.draw(icoRomieSprite);
		}
		window.display();
	}
	if (Beter)
	{
		return 69420;
	}
	else
	{
		return 0;
	}
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
