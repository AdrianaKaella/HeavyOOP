#include "Particle.h"


Particle::Particle()
{
}


Particle::~Particle()
{
}


void Particle::init()
{
	radius = ofRandom(4, 23);
	location.x = ofGetMouseX();
	location.y = ofGetMouseY();

	speed.x = ofRandom(-SPEED, SPEED);
	speed.y = ofRandom(-SPEED, SPEED);

	dotColour = ofColor(255, 255, 255, 255);
	innerColour = ofColor(255, 100, 0, 127);
	outerColour = ofColor(187, 74, 0, 23);
}


void Particle::move()
{
	location += speed;
}


void Particle::draw()
{
	ofSetColor(outerColour);
	ofDrawCircle(location, radius * 2);

	ofSetColor(innerColour);
	ofDrawCircle(location, radius);

	ofSetColor(dotColour);
	ofDrawCircle(location, radius / 3.5);
}

void Particle::setColours(ofColor outer, ofColor inner)
{
	outerColour = outer;
	innerColour = inner;
}
