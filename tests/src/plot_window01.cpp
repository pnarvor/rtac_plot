#include <iostream>
using namespace std;

#include <rtac_plot/PlotWindow.h>
using namespace rtac::plot;

int main()
{
    PlotWindow display;

    while(!display.should_close()) {
        display.draw();
    }

    return 0;
}
