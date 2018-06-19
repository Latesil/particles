#include "swarm.h"

namespace sdlone {
Swarm::Swarm() {
    m_pParticle = new Particle[NPARTICLES];
}

Swarm::~Swarm() {
    delete [] m_pParticle;
}

}
