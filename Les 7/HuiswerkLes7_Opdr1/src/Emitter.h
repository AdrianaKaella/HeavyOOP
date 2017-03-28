#pragma once


#include "Particle.h"

class Emitter {
    public:
        void setOrigin(const int x, const int y);

        void setCurvingParticleRatio(float ratio);

        void setColours(const ofColor innerColour, const ofColor outerColor);

        Particle* emit() const;

    protected:
        int originX;
        int originY;
        float curvingParticleRatio;
        ofColor inner;
        ofColor outer;
};

