/*
 *  ___FILENAME___
 *  ___PROJECTNAME___
 *
 *  Created by ___FULLUSERNAME___ on ___DATE___.
 *  Copyright ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
 *
 */

#include "___FILEBASENAME___.h"

#include "SimpleAudioEngine.h"
using namespace CocosDenshion;
using namespace cocos2d;
using namespace extension;

___FILEBASENAMEASIDENTIFIER___::___FILEBASENAMEASIDENTIFIER___() : ___VARIABLE_cocos2DXSubclass___()
{
}

Scene* ___FILEBASENAMEASIDENTIFIER___::createScene()
{
    Scene* scene = Scene::create();
    ___FILEBASENAMEASIDENTIFIER___ *layer = ___FILEBASENAMEASIDENTIFIER___::create();
    scene->addChild(layer);
    return scene;
}

bool ___FILEBASENAMEASIDENTIFIER___::init()
{
    if( !___VARIABLE_cocos2DXSubclass___::init() )
    {
        return false;
    }

    return true;
}

___FILEBASENAMEASIDENTIFIER___::~___FILEBASENAMEASIDENTIFIER___(){

}