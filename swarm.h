#ifndef SWARM_H_
#define SWARM_H_

#include "particle.h"

namespace sdlone {
class Swarm {
public:
    const static int NPARTICLES = 5000;

private:
    Particle* m_pParticle;

public:
    Swarm();
    virtual ~Swarm();
    const Particle* const getParticles() { return m_pParticle; }
};
}
#endif // SWARM_H_
