//
// Created by bauli on 2025/01/17.
//

#include "Swarm.h"

namespace Juan {
    Swarm::Swarm() {
        m_pParticles = new Particle[NPARTICLES];

    }
    Swarm::~Swarm() {
        delete [] m_pParticles;
    }
} // Juan