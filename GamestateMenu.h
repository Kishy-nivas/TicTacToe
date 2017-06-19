#pragma once
#include "GameState.h"
#include "MenuButton.h"
#include <SFML\Window\Event.hpp>

class GameStateMenu : public GameState
{

public:
	GameStateMenu(Game* game);

	virtual void draw() override;
	virtual void update() override;
	virtual void handleInput() override;
	
private:
	sf::Text title;
	MenuButton buttons[2];

	void createTitle();
	void playGame();
};
