#pragma once

#include "ofMain.h"
#include "Particle.h"


class CurvingParticle : public Particle
{

	public:
		CurvingParticle();
		~CurvingParticle();

		void move();

		ofVec2f speedCur;

};

