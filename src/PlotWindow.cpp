#include <rtac_plot/PlotWindow.h>

namespace rtac { namespace plot {

PlotWindow::PlotWindow(std::size_t width, std::size_t height,
                       const std::string& title,
                       Context::Ptr sharedContext) :
    rtac::display::Display(width, height, title, sharedContext),
    canvas_(Canvas::Create(this->context())),
    eventHandler_(CanvasEventHandler::Create(canvas_))
{
    this->add_event_handler(eventHandler_);
}


} //namespace plot
} //namespace rtac
