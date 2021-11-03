#include "Plano.h"

Plano::Plano(Ogre::SceneNode* mNode, std::string mat): 
	EntidadIG(mNode), material(mat)
{
	createMesh();
	Ogre::Entity* mPlano = mSM->createEntity("mPlane1080x800" + material);
	mPlano->setMaterialName(mat);
	mNode_->attachObject(mPlano);
}

void Plano::createMesh()
{
	// definir mPlane1080x800
	Ogre::MeshManager::getSingleton().createPlane("mPlane1080x800" + material,
		Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME,
		Ogre::Plane(Ogre::Vector3::UNIT_Y, 0),
		1080, 800, 100, 80, true, 1, 1.0, 1.0, Ogre::Vector3::UNIT_Z);
}