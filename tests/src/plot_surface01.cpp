#include <iostream>
using namespace std;

#include <rtac_display/Display.h>
using namespace rtac::display;

#include <rtac_plot/PlotSurface.h>
using namespace rtac::plot;

int main()
{
    Display display(800, 600, "rtac_plot");
    
    while(!display.should_close()) {
        display.draw();
    }

    return 0;
}
