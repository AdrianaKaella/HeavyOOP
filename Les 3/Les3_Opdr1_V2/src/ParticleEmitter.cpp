#include "ParticleEmitter.h"



ParticleEmitter::ParticleEmitter()
{
}

ParticleEmitter::~ParticleEmitter()
{
}


void ParticleEmitter::setup()
{
	for (int i = 0; i < MAX_PARTICLES; i++)
	{
		particles[i].init();
	}
}


void ParticleEmitter::update()
{
	for (int i = 0; i < MAX_PARTICLES; i++)
	{
		particles[i].move();
	}
}


void ParticleEmitter::draw()
{
	for (int i = 0; i < MAX_PARTICLES; i++)
	{
		particles[i].draw();
	}
}

void ParticleEmitter::spawner()
{
	for (int i = 0; i < MAX_PARTICLES; i++)
	{
		particles[i].init();
	}
}
