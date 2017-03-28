#pragma once

#include "ofMain.h"

class Particle {

    public:
        Particle(); // constructor

        void init(int x, int y);

        virtual void move();

        void draw() const;

        void setColors(const ofColor outer, const ofColor inner);

    protected:
        ofPoint location;
        int radius;
        ofVec2f speed;
        long lifetime;

        ofColor innerColor;
        ofColor outerColor;
};