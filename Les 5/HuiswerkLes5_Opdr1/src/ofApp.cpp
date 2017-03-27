#include "ofApp.h"

void ofApp::setup() {
    ofBackground(ofColor::black);

    for (int i = 0; i < MAX_PARTICLES; i++) {
        Particle p = Particle();
		p.init();
		particles.push_back(p);  
    }
}

void ofApp::update() {
    vector<Particle>::iterator it = particles.begin();
	while (it != particles.end()) {
		it->move();
		it++;
	}

	particleReaper();

}

void ofApp::draw() {
    vector<Particle>::iterator it = particles.begin();
    while(it != particles.end()) {
        it->draw();
		it++;
    }
}

void ofApp::keyPressed(int key) {
    vector<Particle>::iterator it = particles.begin();
    while(it != particles.end()) {
        it->init();
		it++;
    }

	for (int i = 0; i < MAX_PARTICLES; i++) {
		Particle p = Particle();
		p.init();
		particles.push_back(p);
	}
}

void ofApp::particleReaper()
{
	vector<Particle>::iterator it = particles.begin();
	while (it != particles.end()) {
		if (it->isDead == true)
		{
			it = particles.erase(it);
		}

		else
		{
			it++;
		}
	}
}
