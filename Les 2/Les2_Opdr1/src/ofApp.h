#pragma once

#include "ofMain.h"
#include "Particle.h"

#define MAX_PARTICLES 150

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw(); 

		void keyPressed(int key);


	private:
		Particle* particles[MAX_PARTICLES];
		void setRandomColour(Particle* particle);
};
