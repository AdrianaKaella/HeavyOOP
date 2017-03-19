#pragma once

#include "ofMain.h"
#include "Particle.h"

#define MAX_PARTICLES 150

class ParticleEmitter
{
	public:
		ParticleEmitter();
		~ParticleEmitter();

		void setup();
		void update();
		void draw();

		void spawner();

		ofVec2f emitLocation;

	private:
		Particle particles[MAX_PARTICLES];

};

