#pragma once
#include "Obj.h"
#include "Aspa.h"

class AspasMolino : public OgreEntity
{
public:
	AspasMolino(Ogre::SceneNode* mNode, int numAspas, double largo, bool orn, int ori);
	virtual ~AspasMolino();

	virtual bool keyPressed(const OgreBites::KeyboardEvent& evt);
	void setOrientacion(int ori){ orientacion_ = ori ; };
	virtual void receiveEvent(OgreEntity* entidad);
public:
	Ogre::SceneNode* mContainer;
	Ogre::SceneNode* mCenter;
	
	std::vector<Aspa*> mAspas_vec;
	int numAspas_;
	int orientacion_;
};