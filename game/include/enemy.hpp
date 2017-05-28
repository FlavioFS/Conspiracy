#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "engine.hpp"
#include "input_manager.hpp"
#include "animation.hpp"
#include "game_object.hpp"
#include "collision_manager.hpp"

using namespace engine;

class Enemy: public GameObject{
public:
    Enemy();
    Enemy(std::string objectName, double positionX, double positionY, int width, int height);
    virtual ~Enemy();
    virtual void update(double timeElapsed);
    virtual void draw();
    virtual void init();
    virtual Animation * getAnimation();
private:
    void walkInX(double & incX);
    void walkInY(double & incY);
    void specialAction();
    Animation* animator;
    int idleAnimationNumber;
};

#endif
