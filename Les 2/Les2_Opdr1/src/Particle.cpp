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
	location.x = ofGetWidth() / 2;
	location.y = ofGetHeight() / 2;

	speed.x = ofRandom(-SPEED, SPEED);
	speed.y = ofRandom(-SPEED, SPEED);

	dotColour = ofColor(255, 255, 255, 255);
	innerColour = ofColor(255, 100, 0, 127);
	outerColour = ofColor(187, 74, 0, 23);
}


void Particle::move()
{
	// Bottom Right
	if (location.y > 600 && location.x > 768)
	{
		location.x -= SPEED;
	}
	// Bottom Left
	if (location.y > 600 && location.x < 256)
	{
		location.y -= SPEED;
	}
	// Top Left
	if (location.y < 200 && location.x < 256)
	{
		location.x += SPEED;
	}
	// Top Right
	if (location.y < 200 && location.x > 768)
	{
		location.y += SPEED;
	}

	// Right
	else if (location.x > 768)
	{
		location.y += SPEED;
	}
	// Bottom
	else if (location.y > 600)
	{
		location.x -= SPEED;
	}
	// Left
	else if (location.x < 256)
	{
		location.y -= SPEED;
	}
	// Bottom
	else if (location.y < 200)
	{
		location.x += SPEED;
	}
	else
	{
		location += speed;
	}


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
