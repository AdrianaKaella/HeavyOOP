#include "CurvingParticle.h"



CurvingParticle::CurvingParticle()
{

	speedCur = ofVec2f(ofRandom(-SPEED, SPEED), ofRandom(-SPEED, SPEED));

}


CurvingParticle::~CurvingParticle()
{
}


void CurvingParticle::move() {
	location += speed;
	speedCur.rotate(15);
	location += speedCur;
}