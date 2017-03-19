#pragma once

#include "ofMain.h"

#define SPEED 10

class Particle
{

private:
	
	int radius;

	ofColor innerColor;
	ofColor outerColor;

public:
	Particle();
	~Particle();

	void init();
	void move();
	void draw();

	ofPoint location;
	ofVec2f speed;
};

