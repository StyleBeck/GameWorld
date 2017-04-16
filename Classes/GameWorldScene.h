#ifndef __GameWorld_SCENE_H__
#define __GameWorld_SCENE_H__

#include "cocos2d.h"

class GameWorld : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(GameWorld);
};

#endif // __GameWorld_SCENE_H__
