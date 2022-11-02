#include <rtac_plot/CanvasEventHandler.h>

namespace rtac { namespace plot {

CanvasEventHandler::CanvasEventHandler(Canvas::Ptr canvas) :
    EventHandler(false, true, true, false),
    canvas_(canvas)
{}

CanvasEventHandler::Ptr CanvasEventHandler::Create(Canvas::Ptr canvas)
{
    return Ptr(new CanvasEventHandler(canvas));
}

void CanvasEventHandler::mouse_position_callback(double x, double y)
{
    canvas_->mouse_position_callback(x,y);
}

void CanvasEventHandler::mouse_button_callback(int button, int action, int modes)
{
    canvas_->mouse_button_callback(button, action, modes);
}

} //namespace plot
} //namespace rtac
