#include "ofApp.h"


void ofApp::setup()
{
	ofSetBackgroundColor(ofColor::black);

	emitParticles = ParticleEmitter();
	emitParticles.spawner();
}


void ofApp::update()
{
	emitParticles.update();
}


void ofApp::draw()
{
	emitParticles.draw();
}


void ofApp::keyPressed(int key)
{
	emitParticles.spawner();
}
