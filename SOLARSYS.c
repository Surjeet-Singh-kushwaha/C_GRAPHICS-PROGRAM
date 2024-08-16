#include <graphics.h>
#include <math.h>

#define NUM_PLANETS 4

void main() {
    int gd = DETECT, gm;
    int sun_x,sun_y,sun_radius;
     // Define the properties of each planet
    int planet_x[NUM_PLANETS] = {0, 0, 0, 0};
    int planet_y[NUM_PLANETS] = {0, 0, 0, 0};
    int planet_radius[NUM_PLANETS] = {20, 30, 40, 50};
    int planet_color[NUM_PLANETS] = {RED, GREEN, BLUE, CYAN};
    float planet_angle[NUM_PLANETS] = {0, 0, 0, 0};
    float planet_speed[NUM_PLANETS] = {0.01, 0.02, 0.03, 0.04};
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Set the background color to black
    setbkcolor(BLACK);

    // Define the properties of the sun
    sun_x = getmaxx() / 2;
     sun_y = getmaxy() / 2;
     sun_radius = 50;
    setfillstyle(SOLID_FILL, YELLOW);

   
    

    // Draw the sun
    setcolor(YELLOW);
    circle(sun_x, sun_y, sun_radius);
    floodfill(sun_x, sun_y, YELLOW);

    // Loop over time steps
    while (!kbhit()) {
        // Clear the screen
        cleardevice();

        // Draw the sun
        setcolor(YELLOW);
        circle(sun_x, sun_y, sun_radius);
        floodfill(sun_x, sun_y, YELLOW);

        // Loop over each planet
        for (int i = 0; i < NUM_PLANETS; i++) {
            // Update the position of the planet
            planet_angle[i] += planet_speed[i];
            planet_x[i] = sun_x + (int)(cos(planet_angle[i]) * (sun_radius + 100 * (i+1)));
            planet_y[i] = sun_y + (int)(sin(planet_angle[i]) * (sun_radius + 100 * (i+1)));

            // Draw the planet
            setfillstyle(SOLID_FILL, planet_color[i]);
            circle(planet_x[i], planet_y[i], planet_radius[i]);
            floodfill(planet_x[i], planet_y[i], planet_color[i]);
        }

        // Delay to control the animation speed
        delay(20);
    }

    getch();
    closegraph();
    
}

