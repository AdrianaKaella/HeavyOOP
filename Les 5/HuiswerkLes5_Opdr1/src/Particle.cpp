#include "Particle.h"

Particle::Particle() {
}

void Particle::init() {
    radius = ofRandom(10, 50);

    location.x = ofGetWidth() / 2;
    location.y = ofGetHeight() / 2;

    speed.x = ofRandom(-5, 5);
    speed.y = ofRandom(-5, 5);

    innerColor = ofColor(31, 127, 255, 127);
    outerColor = ofColor(128, 255, 255, 15);

	lifetime = 0;
}

void Particle::move() {
    location += speed;

	lifetime += 1;

	if (lifetime <= 100)
	{
		isDead = false;
	}

	else
	{
		isDead = true;
	}
}

void Particle::draw() {
	ofSetColor(outerColor);
	ofDrawCircle(location, radius * 2);

	ofSetColor(innerColor);
	ofDrawCircle(location, radius);

	ofSetColor(ofColor::white);
	ofDrawCircle(location, radius * 0.25);
}

