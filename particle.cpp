#include "particle.h"
#include <stdlib.h>

namespace sdlone {
Particle::Particle() {
    m_x = ((2.0 * rand())/RAND_MAX) - 1;
    m_y = ((2.0 * rand())/RAND_MAX) - 1;
    m_xspeed = 0.01 * (((2.0 * rand())/RAND_MAX) - 1);
    m_yspeed = 0.01 * (((2.0 * rand())/RAND_MAX) - 1);
}

Particle::~Particle() {
    //
}

void Particle::update() {
    m_x += m_xspeed;
    m_y += m_yspeed;
}
}
