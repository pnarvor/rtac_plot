#ifndef _DEF_RTAC_PLOT_PLOT_WINDOW_H_
#define _DEF_RTAC_PLOT_PLOT_WINDOW_H_

#include <rtac_display/Display.h>

#include <rtac_plot/Canvas.h>
#include <rtac_plot/CanvasEventHandler.h>

namespace rtac { namespace plot {

class PlotWindow : public rtac::display::Display
{
    public:

    using Context = rtac::display::Display::Context;

    protected:
    
    Canvas::Ptr             canvas_;
    CanvasEventHandler::Ptr eventHandler_;
    

    public:

    PlotWindow(std::size_t width = 1024, std::size_t height = 768,
               const std::string& title = "rtac_plot",
               Context::Ptr sharedContext = nullptr);
};

} //namespace plot
} //namespace rtac

#endif //_DEF_RTAC_PLOT_PLOT_WINDOW_H_
