#pragma once
#include "BCE/Base/GameState.h"
#include "BCE/Base/GameStateManager.h"
#include "BCE/Graphic/Mesh.h"
#include "BCE/Graphic/Shader.h"
#include "BCE/Graphic/Camera.h"
#include "BCE/Graphic/CubeModel.h"
#include "BCE/Graphic/PlaneModel.h"
#include "BCE/Base/ShaderManager.h"
#include "BCE/Graphic/Model.h"
#include "BCE/Graphic/Skybox.h"
#include "BCE/Graphic/Text.h"
#include "Player.h"
#include "EnemyT4.h"
#include "EnemyT5.h"
#include "BCE/Building/Building.h"
#include <list>

#include<vector>
using namespace BCE::Base;
using namespace BCE::Lights;
using namespace BCE::Graphics;
using glm::vec3;
class Game : public GameState
{
private:
	Platform* platform;
	GameStateManager* manager;
	ShaderManager* shaderManager;
	Player* player;
	CubeModel* cube;
	PlaneModel* plane;
	Model* enemy;
	Text text;
	Skybox skybox;
	Building* building;
	Cajas* cajas;
	std::list<Cajas*> cajasPool;
	std::list<Enemy*> enemyPool;


public:
	Game();
	virtual ~Game();
	void Init() override;
	void Draw() override;
	bool Input(std::map<int, bool> keys) override;
	bool MouseInput(int x, int y, bool leftbutton);
	void Update() override;
	void CreateEnemies();
	void Close() override;

};
	