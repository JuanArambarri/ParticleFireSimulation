//
// Created by bauli on 2025/01/17.
//
#include "Particle.h"

#ifndef PARTICLEFIRESIMULATION_SWARM_H
#define PARTICLEFIRESIMULATION_SWARM_H

namespace Juan {

    class Swarm {
    public:
        const static int NPARTICLES = 5000;
    private:
        Particle *m_pParticles;
    public:
        Swarm();
        virtual ~Swarm();
        const Particle * const getParticles(){return m_pParticles;}; // particle cannot be changed.
    };

} // Juan

#endif //PARTICLEFIRESIMULATION_SWARM_H
