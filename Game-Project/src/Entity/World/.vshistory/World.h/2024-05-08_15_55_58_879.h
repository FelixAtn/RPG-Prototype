#pragma once
#include "Entity/Entity.h"
#include "Entity/Entity resources/Character.h"
#include "Resources/Window/Window.h"

class World : public Characters
{
public:
	World(Window& m_Window);
	void Init() override;
	void Update(float deltaTime) override;
	void Draw(Window& window) override;

private:
	Window& m_Window;
	
};

