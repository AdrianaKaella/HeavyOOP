#include "Particle.h"


Particle::Particle()
{
}


Particle::~Particle()
{
}


void Particle::init() {
	radius = ofRandom(5, 20);

	location.x = ofGetWidth() / 2;
	location.y = ofGetHeight() / 2;

	speed.x = ofRandom(-SPEED, SPEED);
	speed.y = ofRandom(-SPEED, SPEED);

	innerColor = ofColor(242, 83, 24, 150);
	outerColor = ofColor(194, 57, 6, 50);
}

void Particle::move() {
	location += speed;
}

void Particle::draw() {
	ofSetColor(outerColor);
	ofDrawCircle(location, radius * 2);

	ofSetColor(innerColor);
	ofDrawCircle(location, radius);

	ofSetColor(ofColor::white);
	ofDrawCircle(location, radius / 3.5);
}