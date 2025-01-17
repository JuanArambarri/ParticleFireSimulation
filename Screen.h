//
// Created by bauli on 2025/01/14.
//

#ifndef PARTICLEFIRESIMULATION_SCREEN_H
#define PARTICLEFIRESIMULATION_SCREEN_H
#include <iostream>
#include <SDL.h>


namespace Juan {

    class Screen {
    public:
        const static int SCREEN_WIDTH = 800;
        const static int SCREEN_HEIGHT = 600;
    private: //if member variables, prefix with m_ (instance variables vs local variables)
        SDL_Window *m_window;
        SDL_Renderer *m_renderer;
        SDL_Texture *m_texture;
        Uint32 *m_buffer;

    public:
        Screen();
        bool init(); //check if fail
        void update();
        void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
        bool processEvents();
        void close();


    };

} // Juan

#endif //PARTICLEFIRESIMULATION_SCREEN_H
