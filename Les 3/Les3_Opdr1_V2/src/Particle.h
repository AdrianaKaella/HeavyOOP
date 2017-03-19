#pragma once

#include "ofMain.h"
#include "ParticleEmitter.h"

#define SPEED 7

class Particle
{

public:
	Particle();
	~Particle();

	void init();
	void move();
	void draw();

private:
	int radius;
	ofPoint location;
	ofVec2f speed;

	ofColor innerColour;
	ofColor outerColour;

};

