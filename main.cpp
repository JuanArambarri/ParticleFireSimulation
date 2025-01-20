#include <iostream>
#include <SDL.h>
#include <math.h>
#include <stdlib.h>

#include "Screen.h"
#include "Swarm.h"

using namespace std;
using namespace Juan;

int main(int argc, char* argv []) {

    srand(time(NULL));

    Screen screen;

    if (screen.init() == false) {
        cout << "Error initialising SDL." << endl;
    }

    Swarm swarm;

    while(true){
        int elapsed =(int)SDL_GetTicks();

        //update particles
        swarm.update(elapsed);

        //draw particles
        unsigned char green =(1+sin(elapsed *0.0004))* 128;
        unsigned char red =(1+sin(elapsed *0.00001))* 128;
        unsigned char blue =(1+sin(elapsed *0.0002))* 128;

        const  Particle * const pParticles = swarm.getParticles();

        for (int i = 0; i < Swarm::NPARTICLES; ++i) {
            Particle particle = pParticles[i];

            int x = (particle.m_x + 1)* (Screen::SCREEN_WIDTH/2);
            int y = particle.m_y * (Screen::SCREEN_WIDTH/2) + Screen::SCREEN_HEIGHT/2;

            screen.setPixel(x,y,red, green, blue);
        }
        screen.boxBlur();

        //Draw the screen
        screen.update();

        //check for messages/events
        if(screen.processEvents() == false){
            break;
        }
    }
    screen.close();
    return 0;
}
