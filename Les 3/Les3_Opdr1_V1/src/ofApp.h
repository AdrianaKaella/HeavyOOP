#pragma once

#include "ofMain.h"
#include "Particle.h"

#define MAX_PARTICLES 150

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw(); 

		void mousePressed(int x, int y, int button);


	private:
		Particle* particles[MAX_PARTICLES];
		void setRandomColour(Particle* particle);
};
