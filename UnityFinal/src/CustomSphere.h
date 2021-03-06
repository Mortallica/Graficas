#pragma once
#include "ObjectWEvents.h"

class CustomSphere : public ObjectWEvents, public ofSpherePrimitive {
public:
	CustomSphere() :CustomSphere(10) {}

	CustomSphere(float radius) {
		ObjectWEvents::setRadius(radius);
		ofSpherePrimitive::setRadius(radius);
		RegisterMouseEvents();
		this->setPosition(552, ofGetHeight() / 2, 0);
	}

	~CustomSphere() {
		UnregisterMouseEvents();
	}

	void GetInfo();
	// Inherited via GenericObjectWithEvents
	virtual void draw(int x = 0, int y = 0, int z = 0, int w = 0, int h = 0, int screenW = 0, int screenH = 0) override;
};