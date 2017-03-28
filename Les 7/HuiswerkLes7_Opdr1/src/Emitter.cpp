#include "Emitter.h"
#include "CurvingParticle.h"

Particle* Emitter::emit() const {
    Particle* newParticle;
	newParticle = new Particle();
	newParticle->init(originX, originY);

    return newParticle;
}

void Emitter::setCurvingParticleRatio(float ratio) {
    curvingParticleRatio = ratio;
}

void Emitter::setOrigin(int x, int y) {
	originX = x;
	originY = y;
}

void Emitter::setColours(const ofColor innerColour, const ofColor outerColor) {
    inner = innerColour;
    outer = outerColor;
}
