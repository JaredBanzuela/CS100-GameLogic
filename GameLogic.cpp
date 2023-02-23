#include "GameLogic.h"

GameLogic::GameLogic(vector<Scenes> newList, Player newPlayer) {
    this->sceneList = newList;
    this->Protagonist = newPlayer;
}

GameLogic::~GameLogic() {
    for (int i = 0; i < this->sceneList.size(); i++) {
        this->sceneList.remove(i);
        delete sceneList.at(i);
    }
    delete[] this->sceneList;
    delete this->Protagonist;
}

void addScene(Scene newScene) {
    this->sceneList.push_back(newScene);
}

void removeScene(int index) {
    this->sceneList.remove(index);
    // delete?
}

void playScenes() {
    // Abstract?
    for (int i = 0; i < this->sceneList.size(); i++) {
        this->sceneList.at(i).startScene();
        // startScene implemented in Scene Class
    }
}

void initalize() {
    Scene startScreen = new Scene(/*Start Menu Parameters*/);
    this->sceneList.push_back(startScreen);
    this->sceneList.back().startScene();
}

void clearScenes() {
    for (int i = 0; i < this->sceneList.size(); i++) {
        this->removeScene(i);
    }
}
