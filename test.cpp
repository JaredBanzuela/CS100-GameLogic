#include "gtest/gtest.h"
#include "Player.h"
#include "Scene.h"
#include "GameLogic.h"
using Player::player;
using Scene::scene;

class PlayerStub : public Player {
    public:
        
};

class SceneStub : public Scene {
    public:
        void startScene() {
            printf("Scene Starting\n");
        }
};

TEST(GameLogicTests, addSceneTest) {
    vector<Scene> testVector;
    Scene testScene = new SceneStub;
    Player testPlayer = new PlayerStub;
    GameLogic testGameLogic = new GameLogic(testVector, testPlayer);
    testGameLogic.addScene(testScene);
    // bool testResult = 
    // EXPECT_TRUE(testResult);
}