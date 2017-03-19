#include "ofApp.h"


void ofApp::setup(){

	ofSetBackgroundColor(ofColor::black);

	part = Particle();
	part.init();

	partCur = CurvingParticle();
	partCur.init();

}

void ofApp::update(){

	part.move();
	partCur.move();

}

void ofApp::draw(){

	part.draw();
	partCur.draw();

}

void ofApp::keyPressed(int key){

	part.init();
	partCur.init();

}
