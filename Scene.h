#ifdef SCENE_H
#define SCENE_H

namespace scene {

class Scene {
    public:
        Scene();
        ~Scene();
        virtual void startScene() = 0;
};

}

#endif