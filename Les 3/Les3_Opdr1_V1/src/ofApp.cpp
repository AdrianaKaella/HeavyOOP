#include "ofApp.h"


void ofApp::setup()
{
	ofSetBackgroundColor(ofColor::black);

	for (int i = 0; i < MAX_PARTICLES; i++)
	{
		particles[i] = new Particle();
		particles[i]->init();
	}
}


void ofApp::update()
{
	for (int i = 0; i < MAX_PARTICLES; i++)
	{
		particles[i]->move();
	}
}


void ofApp::draw()
{
	for (int i = 0; i < MAX_PARTICLES; i++)
	{
		particles[i]->draw();
	}
}


void ofApp::mousePressed(int x, int y, int button)
{
	for (int i = 0; i < MAX_PARTICLES; i++)
	{
		particles[i] = new Particle();
		particles[i]->init();
		setRandomColour(particles[i]);
	}
}



void ofApp::setRandomColour(Particle* particle)
{
	float random = ofRandom(10);
	
	if (random > 3 && random < 7)
	{
		particle->setColours(ofColor(40, 168, 0, 23), ofColor(52, 216, 0, 127));
	}

	else if (random >= 7)
	{
		particle->setColours(ofColor(11, 59, 130, 23), ofColor(15, 77, 168, 127));
	}
}
