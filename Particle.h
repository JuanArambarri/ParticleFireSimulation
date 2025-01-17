//
// Created by bauli on 2025/01/17.
//

#ifndef PARTICLEFIRESIMULATION_PARTICLE_H
#define PARTICLEFIRESIMULATION_PARTICLE_H

namespace Juan {

    struct Particle {
        //Particle is now a struct in order to make these accessible. (will need access to x and y constantly)
        double m_x; // x value for position
        double m_y; // y value for position
    public:
        Particle();
        ~Particle();

    };

} // Juan

#endif //PARTICLEFIRESIMULATION_PARTICLE_H
