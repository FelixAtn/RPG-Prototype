#include "Character.h"

Character::Character() {}


Character::Character(sf::Sprite* sprite) : m_Player(sprite), m_Enemy(m_Enemy), m_IsInit(false)
{
	m_Player = new sf::Sprite;
	sprite = m_Player;
	Init();
}

Character::~Character()
{

}

void Character::Init()
{
	InitPlayer();
}

void Character::Update(float deltaTime)
{

}

void Character::Draw(Window& window)
{}

void Character::InitPlayer()
{
	m_IsInit = true;
	if(!m_IsInit)
	{
		m_Loader.Load(m_PlayerText, "mobss.png");
		m_Player->setTexture(m_PlayerText);
		m_Player->setPosition(600, 200);
		m_Player->setTextureRect(sf::IntRect(0, 0, 80, 80));
		m_Player->setScale(1, 1);
	}
	
}

void Character::InitEnemy()
{

}





