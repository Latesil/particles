#include <iostream>
#include <SDL2/SDL.h>
#include "screen.h"

using namespace std;
using namespace sdlone;

int main()
{
    Screen screen;

    if(screen.init() == false) {
        cout << "Error init" << endl;
    }

    while(true) {
        // update particles
        //draw a particle
        // check for events
        if (!(screen.processEvents())) {
            break;
        }
    }

    screen.close();

    return 0;
}
