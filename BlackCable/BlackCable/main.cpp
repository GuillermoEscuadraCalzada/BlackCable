#include "BCE/Base/GameStateManager.h"
#include "Menu.h"

int main(int argc, char* argv[])
{
	auto gameStateManager = GameStateManager::getPtr();
	gameStateManager->SetState(new Menu());
	gameStateManager->GameLoop();
	return 0;
}

// Menu 
// Carga de imagenes o Texto
// Game Shooter
// 1 arma 3d (carga de modelos) (tarea)
// 2 enemigos low poly (tarea)
// mostrar da�o
// 1 arena props (tarea)
// cajas de municiones
// gameplay TB