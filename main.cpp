#include <iostream>
#include <SDL.h>
#include "Screen.h"

using namespace std;
using namespace Juan;

int main(int argc, char* argv []) {

    Screen screen;

    if (screen.init() == false) {
        cout << "Error initialising SDL." << endl;
    }

    while(true){
        //update particles
        //draw particles
        //check for messages/events
        if(!screen.processEvents()){
            break;
        }

    }
    screen.close();
    return 0;
}
