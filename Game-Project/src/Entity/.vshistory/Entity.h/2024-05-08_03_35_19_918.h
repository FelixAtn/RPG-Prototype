#pragma once
#include <Resources/Window/Window.h>
#include <SFML/Graphics.hpp>
#include "Physics/CollisionManager.h"
#include <iostream>

class Entity
{
public:
	Entity();
	~Entity();

	virtual void Init() = 0;
	virtual	void Update(float deltaTime) = 0;
	virtual void Draw(Window& window) = 0;

private:


protected:

private:



protected:
	int a = 1;
};

