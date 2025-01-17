//
// Created by bauli on 2025/01/17.
//

#include "Particle.h"
#include <stdlib.h>

namespace Juan {
    Particle::Particle() {
        m_x = ((2.0 * rand())/RAND_MAX) - 1;
        m_y = ((2.0 * rand())/RAND_MAX) - 1;
    }
    Particle::~Particle() {}
} // Juan