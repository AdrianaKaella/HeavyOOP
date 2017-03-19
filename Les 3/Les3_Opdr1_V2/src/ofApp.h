#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "ParticleEmitter.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw(); 

		void keyPressed(int key);


	private:
		ParticleEmitter emitParticles;

};
