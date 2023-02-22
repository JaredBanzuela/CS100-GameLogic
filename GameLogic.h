#ifdef GAMELOGIC_H
#define GAMELOGIC_H
#include <vector>
#include "Scene.h"
#include "Player.h"

using namespace std;

class GameLogic  {
    private:
        vector<Scene> sceneList;
        Player Protagonist;
    public:
        GameLogic(vector<Scenes> newList, Player newPlayer);
        ~GameLogic();
        void addScene(Scene newScene);
        void removeScene(int);
        void playScenes();
        void initialize();
        void clearScenes();
        void setPlayer();
};

#endif