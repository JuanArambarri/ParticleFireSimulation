//
// Created by bauli on 2025/01/17.
//

#include "Particle.h"
#include <math.h>
#include <stdlib.h>

namespace Juan {
    Particle::Particle(): m_x(0),m_y(0){
    init();
    }
    void Particle::init(){
        m_x = 0;
        m_y = 0;
        m_direction = (2 * M_PI * rand())/RAND_MAX;
        m_speed = (0.02 * rand())/RAND_MAX;

        m_speed *= m_speed;
    }
    Particle::~Particle() {}

    void Particle::update(int interval) {
        m_direction += interval * 0.0004;

        double xspeed = m_speed * cos(m_direction);
        double yspeed = m_speed * sin(m_direction);

        m_x += xspeed * interval;
        m_y += yspeed * interval; // multiplying interval makes things to run properly on all systems.

        if (m_x < -1 || m_x > 1 || m_y < -1 || m_y > 1){
            init();
        }
        if(rand() < RAND_MAX/100){
            init();
        }


    }
} // Juan