#pragma once

#include "ofMain.h"

#define SPEED 7

class Particle
{

public:
	Particle();
	~Particle();

	void init();
	void move();
	void draw();
	void setColours(ofColor outer, ofColor inner);

private:
	ofPoint location;
	int radius;
	ofVec2f speed;
	long lifetime;

	ofColor dotColour;
	ofColor innerColour;
	ofColor outerColour;

};

