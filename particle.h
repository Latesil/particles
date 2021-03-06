#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace sdlone {
struct Particle {
    double m_x;
    double m_y;

    double m_speed;
    double m_direction;

public:
    Particle();
    virtual ~Particle();
    void update(bool explosion, int interval);
};
}
#endif // PARTICLE_H_
