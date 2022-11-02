#ifndef _DEF_RTAC_PLOT_CANVAS_H_
#define _DEF_RTAC_PLOT_CANVAS_H_

#include <memory>

#include <rtac_display/DrawingSurface.h>

namespace rtac { namespace plot {

/**
 * This class holds one or more PlotSurfaces and manages their layout.
 *
 * This class should be tied to a single window.
 */
class Canvas : rtac::display::DrawingSurface
{
    public:

    using Ptr      = std::shared_ptr<Canvas>;
    using ConstPtr = std::shared_ptr<const Canvas>;

    protected:

    Canvas(rtac::display::GLContext::Ptr context);

    public:

    static Ptr Create(rtac::display::GLContext::Ptr context);

    void mouse_position_callback(double x, double y);
    void mouse_button_callback(int button, int action, int modes);
};

} //namespace plot
} //namespace rtac

#endif //_DEF_RTAC_PLOT_CANVAS_H_
