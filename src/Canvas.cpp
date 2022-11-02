#include <rtac_plot/Canvas.h>

namespace rtac { namespace plot {

Canvas::Canvas(rtac::display::GLContext::Ptr context) :
    rtac::display::DrawingSurface(context)
{}

Canvas::Ptr Canvas::Create(rtac::display::GLContext::Ptr context)
{
    return Ptr(new Canvas(context));
}

void Canvas::mouse_position_callback(double x, double y)
{
    std::cout << "Mouse position : " << x << ',' << y << std::endl;
}

void Canvas::mouse_button_callback(int button, int action, int modes)
{
    std::cout << "Mouse button : " << button << std::endl;
}

} //namespace plot
} //namespace rtac

