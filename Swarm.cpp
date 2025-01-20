//
// Created by bauli on 2025/01/17.
//

#include "Swarm.h"

namespace Juan {
    Swarm::Swarm(): lastTime(0) {
        m_pParticles = new Particle[NPARTICLES];

    }
    Swarm::~Swarm() {
        delete [] m_pParticles;
    }
    void Swarm::update(int elapsed) {
        int interval = elapsed - lastTime;
        for (int i = 0; i < Swarm::NPARTICLES; ++i) {
            m_pParticles[i].update(interval);
        }
        lastTime = elapsed;
    }
} // Juan