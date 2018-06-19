#include <iostream>
#include <SDL2/SDL.h>
#include "screen.h"
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "swarm.h"

using namespace std;
using namespace sdlone;

int main()
{
    srand(time(NULL));

    Screen screen;

    if(screen.init() == false) {
        cout << "Error init" << endl;
    }

    Swarm swarm;

    while(true) {
        // update particles
        //draw a particle
        int elapsed = SDL_GetTicks();
        unsigned int green = (1 + sin(elapsed * 0.0001)) * 128; //smooth change (int not char)
        unsigned int red = (1 + sin(elapsed * 0.0002)) * 128;
        unsigned int blue = (1 + sin(elapsed * 0.0003)) * 128;

        const Particle* const pParticles = swarm.getParticles();
        for(int i=0;i<Swarm::NPARTICLES; i++) {
            Particle particle = pParticles[i];

            int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH/2;
            int y = (particle.m_y + 1) * Screen::SCREEN_HEIGHT/2;

            screen.setPixel(x, y, red, green, blue);
        }

        //draw the screen
        screen.update();

        // check for events
        if (!(screen.processEvents())) {
            break;
        }
    }

    screen.close();

    return 0;
}
