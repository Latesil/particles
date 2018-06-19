#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace sdlone {
struct Particle {
    double m_x;
    double m_y;

public:
    Particle();
    virtual ~Particle();
};
}
#endif // PARTICLE_H_
