#include "swarm.h"

namespace sdlone {
Swarm::Swarm() : lastTime(0) {
    m_pParticle = new Particle[NPARTICLES];
}

Swarm::~Swarm() {
    delete [] m_pParticle;
}

void Swarm::update(bool explosion, int elapsed) {
    if (explosion) {
        int interval = elapsed - lastTime;
        for (int i = 0; i < Swarm::NPARTICLES; i++) {
            m_pParticle[i].update(true, interval);
        }

        lastTime = elapsed;
    } else {
        int interval = elapsed - lastTime;
        for (int i = 0; i < Swarm::NPARTICLES; i++) {
            m_pParticle[i].update(false, interval);
        }
        lastTime = elapsed;
    }

}

}
